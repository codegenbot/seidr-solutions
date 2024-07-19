vector<char> distinct_chars;

for (char c : str) {
    int idx = tolower(c) - 'a';
    if (idx >= 0 && idx <= 25) {
        bool found = false;
        for (char d : distinct_chars) {
            if (d == tolower(c)) {
                found = true;
                break;
            }
        }
        if (!found) {
            distinct_chars.push_back(tolower(c));
        }
    }
}
return distinct_chars.size();