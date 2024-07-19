bool issame(const string& s1, const string& s2) {
    return s1.size() == s2.size() && std::equal(s1.begin(), s1.end(), s2.begin());
}

vector<string> separate_paren_groups(string paren_string);

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current_group;
    int open_count = 0;

    for(char c : paren_string){
        if(c == '('){
            if(open_count > 0){
                current_group += c;
            }
            open_count++;
        } else if(c == ')'){
            open_count--;
            if(open_count > 0){
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}