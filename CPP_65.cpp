string input = to_string(x);
    int n = input.size();
    shift %= n;
    if (shift == 0) {
        return input;
    }
    string result = input.substr(n - shift) + input.substr(0, n - shift);
    return result;
}