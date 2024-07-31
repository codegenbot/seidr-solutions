// Complete the function signature
string anti_shuffle(string s) {
    string result = "";
    string word = "";
    
    for (char c : s) {
        if (c == ' ') {
            sort(word.begin(), word.end(), greater<char>());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    
    sort(word.begin(), word.end(), greater<char>());
    result += word;
    
    return result;
}