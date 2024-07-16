vector<string> result;
    string word = "";
    bool comma_exists = false;
    
    for(char c : txt){
        if(c == ' ' && !comma_exists){
            if(word != "")
                result.push_back(word);
            word = "";
        } else if(c == ','){
            comma_exists = true;
            if(word != "")
                result.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    
    if(word != "")
        result.push_back(word);
    
    if(result.size() == 1 && !comma_exists){
        int odd_lower_case_letters = 0;
        for(char c : txt){
            if(islower(c) && (c-'a') % 2 == 1)
                odd_lower_case_letters++;
        }
        result[0] = to_string(odd_lower_case_letters);
    }
    
    return result;
}