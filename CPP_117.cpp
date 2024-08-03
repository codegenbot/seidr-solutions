bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> select_words(string s, int n){
    vector<string> result;
    string word = "";
    int count = 0;
    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                count++;
            }
            word += c;
        }
    }
    if (!word.empty() && count == n) {
        result.push_back(word);
    }
    return result;
}