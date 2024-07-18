string circular_shift(int x, int shift){
    string numStr = to_string(x);
    int n = numStr.size();
    shift %= n;
    if(shift == 0){
        return numStr;
    }
    if(shift > n){
        reverse(numStr.begin(), numStr.end());
        return numStr;
    }
    string shiftedNum = numStr.substr(n - shift) + numStr.substr(0, n - shift);
    return shiftedNum;
}