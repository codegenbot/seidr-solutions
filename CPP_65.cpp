string circular_shift(int x, int shift){
    string s = to_string(x);
    shift %= s.size();
    if (shift == 0) {
        return s;
    }
    else {
        shift = s.size() - shift;
        return s.substr(shift) + s.substr(0, shift);
    }
}