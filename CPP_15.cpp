string string_sequence(int n) {
    ostringstream oss;
    for (int i = 1; i <= n; ++i) {
        if(i == n) 
            oss << i;
        else
            oss << i << " ";
    }
    return oss.str();
}