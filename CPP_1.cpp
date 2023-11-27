vector<string> separate_paren_groups(string paren_string){
    vector<string> groups;
    int count = 0;
    string group = "";

    for(int i = 0; i < paren_string.length(); i++){
        if(paren_string[i] == '('){
            count++;
            group += paren_string[i];
        }
        else if(paren_string[i] == ')'){
            count--;
            group += paren_string[i];
            if(count == 0){
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}