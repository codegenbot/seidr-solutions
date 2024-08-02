int count_open = 0, count_close = 0;

bool is_nested(string str){
    for(char c : str){
        if(c == '[')count_open++;
        else if(c == ']')count_close++;
        
        if(count_open > 0 && count_close > count_open)
            return true;
        
        if(count_close > count_open)
            return false;
    }
    
    return count_open > 0;
}