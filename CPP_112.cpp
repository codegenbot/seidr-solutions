string res = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            res += ch;
        }
    }
    string resCopy = res;
    reverse(resCopy.begin(), resCopy.end());
    return {res, res == resCopy ? "True" : "False"};
}