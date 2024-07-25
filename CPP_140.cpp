string result = "";
    bool prev_space = false;
    int space_count = 0;
    
    for(char c : text){
        if(c == ' '){
            space_count++;
            if(space_count > 2){
                if(!prev_space) result += "-";
            } else {
                result += '_';
            }
            prev_space = true;
        } else {
            result += c;
            prev_space = false;
            space_count = 0;
        }
    }
    
    return result;
}