transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (!s.empty() && (s.back() == 'y')) {
        s.pop_back(); 
    }
    int count = count_if(s.begin(), s.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    });
    return count;
}