int openCount = 0;
    for(char c : str){
        if(c == '['){
            openCount++;
        }else if(c == ']' && openCount > 0){
            openCount--;
        }
    }
    return openCount < str.size()/2 && openCount > 0;
}