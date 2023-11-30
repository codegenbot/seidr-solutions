vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current_group;
    int count = 0;
    
    for(int i=0; i<paren_string.length(); i++){
        if(paren_string[i] == '('){
            count++;
        }
        else if(paren_string[i] == ')'){
            count--;
        }
        
        current_group += paren_string[i];
        
        if(count == 0){
            result.push_back(current_group);
            current_group = "";
        }
    }
    
    return result;
}