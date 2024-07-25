bool prev_space = false;
    string result = "";
    
    for(char c : text){
        if(c == ' '){
            if(prev_space){
                result.pop_back();
                result += "-";
            } else {
                result += "_";
            }
            prev_space = true;
        } else {
            result += c;
            prev_space = false;
        }
    }
    
    return result;
}