string result = "";
    bool prev_space = false;
    int space_count = 0;
    
    for(char c : text){
        if(c == ' '){
            if(prev_space){
                space_count++;
            } else {
                space_count = 1;
            }
            prev_space = true;
        } else {
            if(space_count > 2){
                result += "-";
            } else {
                result += (prev_space ? "_" : "");
            }
            result += c;
            prev_space = false;
            space_count = 0;
        }
    }
    
    if(space_count > 2){
        result += "-";
    } else {
        result += (prev_space ? "_" : "");
    }
    
    return result;
}