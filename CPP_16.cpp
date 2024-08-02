int count_distinct_characters(string str) { 
    vector<char> characters;
    for (char c : str) {
        if (tolower(c) >= 'a' && tolower(c) <= 'z') {
            bool found = false;
            for (char ch : characters) {
                if (ch == tolower(c)) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                characters.push_back(tolower(c));
            }
        }
    }
    return characters.size();
}