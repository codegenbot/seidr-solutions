string string_sequence(int n) {
    ostringstream oss;
    for (int i = 1; i <= n; ++i) {
        if (i == 1)
            oss << "1";
        else
            oss << i << " ";
    }
    return oss.str();
}