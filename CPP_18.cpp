int how_many_times(string str, string substring){
    int count = 0;
    int subLen = substring.length();
    if(subLen == 0) return count;

    int strLen = str.length();
    
    for(int i = 0; i <= strLen - subLen; i++){
        bool isMatch = true;
        
        for(int j = 0; j < subLen; j++){
            if(str[i+j] != substring[j]){
                isMatch = false;
                break;
            }
        }
        
        if(isMatch){
            count++;
        }
    }
    
    return count;
}