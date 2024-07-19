string circular_shift(int x, int shift) {
    string num = to_string(x);
    shift %= num.size();
    
    if (shift == 0) {
        return num;
    }
    
    string result = num.substr(num.size() - shift) + num.substr(0, num.size() - shift);
    return result;
}