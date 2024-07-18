vector<string> result;
    string filtered_s;
    for(char ch : s){
        if(c.find(ch) == string::npos){
            filtered_s.push_back(ch);
        }
    }
    string reversed(filtered_s.rbegin(), filtered_s.rend());
    result.push_back(filtered_s);
    result.push_back(filtered_s == reversed ? "True" : "False");
    return result;
}