string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;  // or return str.substr(shift % n); if you want a more efficient solution
    else {
        string result = "";
        for (int i = shift; i < n; i++)
            result += str[i];
        for (int i = 0; i < shift; i++)
            result += str[i];
        return result;
    }
}