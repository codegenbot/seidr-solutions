vector<char> characters;

for (char c : str) {
    int index = 0;
    for (; index < characters.size(); ++index) {
        if (tolower(c) == tolower(characters[index])) {
            break;
        }
    }
    if (index == characters.size()) {
        characters.push_back(c);
    }
}

return characters.size();