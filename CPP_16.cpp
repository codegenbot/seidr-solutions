vector<char> unique_chars;

for (char c : str) {
    int idx = 0;
    for (char ch : unique_chars) {
        if (tolower(c) == tolower(ch)) {
            idx = 1;
            break;
        }
    }
    if (!idx)
        unique_chars.push_back(tolower(c));
}

return unique_chars.size();