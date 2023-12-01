bool is_nested(string str){
    int count = 0;
    bool nested = false;
    
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']'){
            count--;
        }
        
        if(count > 0 && count < str.length()){
            nested = true;
            break;
        }
    }
    
    return nested;
}