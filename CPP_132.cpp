bool is_nested(string str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']'){
            if(count > 0){
                count--;
            }
        }
    }
    return count > 0;
}