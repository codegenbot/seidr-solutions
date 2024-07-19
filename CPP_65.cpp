string circular_shift(int x, int shift) {
    string num = to_string(x);
    shift %= num.size();
    if (shift == 0) {
        return num;
    } else {
        string shifted = num.substr(num.size() - shift) + num.substr(0, num.size() - shift);
        return shifted;
    }
}