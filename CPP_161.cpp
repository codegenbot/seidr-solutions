for (char &c : s) {
    if (isalpha(c)) {
        if (islower(c)) {
            c = toupper(c);
        } else {
            c = tolower(c);
        }
    }
}
if (std::none_of(s.begin(), s.end(), ::isalpha)) {
    std::reverse(s.begin(), s.end());
}
return s;