string circular_shift(int x, int shift) {
    string numStr = to_string(x);
    int n = numStr.size();
  
    shift %= n;
  
    if(shift > 0){
        reverse(numStr.begin(), numStr.end());
        reverse(numStr.begin(), numStr.begin() + shift);
        reverse(numStr.begin() + shift, numStr.end());
    }
  
    return numStr;
}