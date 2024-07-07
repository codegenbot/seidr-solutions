Here is the solution:

vector<string> reverse_delete(string s, string c) {
    vector<char> char_s(s.begin(), s.end());
    for (char ch : c) {
        auto it = find(char_s.begin(), char_s.end(), ch);
        while (it != char_s.end()) {
            char_s.erase(it);
            break;
        }
    }
    string result = "";
    for (int i = 0; i < char_s.size(); i++) {
        if (i == 0 || char_s[i] != char_s[char_s.size() - i - 1]) {
            result += char_s[i];
        }
    }
    return {s.substr(0, s.find(c[0])) + result, to_string(result == string(result.rbegin(), result.rend()))};
}