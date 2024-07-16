vector<string> result;
    string word = "";
    int oddCount = 0;
    for (char& c : txt) {
        if (isalpha(c)) {
            word += c;
            if (islower(c) && ((c - 'a') % 2 == 1)) {
                oddCount++;
            }
        } else if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
            }
            word = "";
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.empty()) {
        result.push_back(to_string(oddCount));
    }
    return result;
}