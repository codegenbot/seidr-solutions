vector<string> res;
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    res.push_back(result);
    res.push_back(result == string(result.rbegin(), result.rend()) ? "True" : "False");
    return res;
}