string res = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            res += ch;
        }
    }
    string res_reversed = res;
    reverse(res_reversed.begin(), res_reversed.end());
    return {res, (res == res_reversed) ? "True" : "False"};
}