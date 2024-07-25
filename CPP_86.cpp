string anti_shuffle(string s){
    string result, word;
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end());
            result += word + c;
            word.clear();
        } else {
            word += c;
        }
    }
    sort(word.begin(), word.end());
    result += word;
    return result;
}