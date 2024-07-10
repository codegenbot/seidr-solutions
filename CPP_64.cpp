return std::count_if(s.begin(), s.end(), [](char c) {
    char low = std::tolower(c);
    return low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
});