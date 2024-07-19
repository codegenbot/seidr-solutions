vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> v1, vector<string> v2){
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    return v1 == v2;
}

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