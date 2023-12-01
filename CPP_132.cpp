bool is_nested(string str){
    int n = str.length();
    int count = 0;
    for(int i=0; i<n; i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']' && count > 0){
            count--;
            if(count == 0){
                return true;
            }
        }
    }
    return false;
}