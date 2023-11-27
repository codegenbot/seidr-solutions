string circular_shift(int x, int shift) {
    string num = to_string(x);
    int size = num.size();
    
    if (shift > size) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= size;
    string shiftedNum = num.substr(size - shift) + num.substr(0, size - shift);
    return shiftedNum;
}