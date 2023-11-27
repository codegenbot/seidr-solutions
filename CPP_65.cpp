string circular_shift(int x, int shift) {
    string result = to_string(x);
    int len = result.length();
    if (shift > len) {
        reverse(result.begin(), result.end());
    }
    else {
        rotate(result.begin(), result.begin() + len - shift, result.end());
    }
    return result;
}