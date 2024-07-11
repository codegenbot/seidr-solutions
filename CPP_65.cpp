string result = to_string(x);
    int n = result.size();
    shift = shift % n;
    if (shift == 0) {
        return result;
    }
    reverse(result.begin(), result.end());
    reverse(result.begin(), result.begin() + shift);
    reverse(result.begin() + shift, result.end());
    return result;
}