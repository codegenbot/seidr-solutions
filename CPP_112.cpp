string res = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            res += ch;
        }
    }
    string res_copy = res;
    reverse(res_copy.begin(), res_copy.end());
    return {res, (res == res_copy ? "True" : "False")};
}