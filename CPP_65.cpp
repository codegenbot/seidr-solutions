string circular_shift(int x,int shift){
    string num = to_string(x);
    int length = num.length();
    
    if(shift > length){
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift = shift % length;
    string result = num.substr(length - shift) + num.substr(0, length - shift);
    
    return result;
}