string circular_shift(int x, int shift) {
    std::string num_str = std::to_string(x);
    int n = num_str.size();
    shift %= n;
    if (shift == 0) {
        return num_str;
    }
    std::string result = num_str.substr(n - shift) + num_str.substr(0, n - shift);
    return result;
}