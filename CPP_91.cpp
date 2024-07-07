int is_bored(string S) {
    int count = 0;
    string word;
    for (string sentence : split(S, ".!?")) {
        if (sentence.length() > 2 && sentence.substr(0, 2) == "I ") {
            count++;
        }
    }
    return count;
}

vector<string> split(string str, char ch) {
    vector<string> tokens = {};
    string token = "";
    for (char c : str) {
        if (c == ch) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}