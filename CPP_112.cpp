string res = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            res += ch;
        }
    }
    string res_reverse = res;
    reverse(res_reverse.begin(), res_reverse.end());
    
    return {res, (res == res_reverse) ? "True" : "False"};
}