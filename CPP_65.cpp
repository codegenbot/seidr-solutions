string circular_shift(int x, int shift){
    string num = to_string(x);
    int len = num.length();
    shift = shift % len;
    
    if(shift == 0){
        return num;
    }
    
    string shiftedNum = num.substr(len - shift) + num.substr(0, len - shift);
    
    return shiftedNum;
}