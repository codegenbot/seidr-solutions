```
vector<string> reverse_delete(string s, string c) {
    vector<char> char_s(s.begin(), s.end());
    for (char ch : c) {
        auto it = find(char_s.begin(), char_s.end(), ch);
        if (it != char_s.end()) {
            char_s.erase(it);
        }
    }
    string result_str(char_s.begin(), char_s.end());
    vector<string> result;
    result.push_back(result_str);
    if (is_palindrome(result_str)) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

bool is_palindrome(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    vector<string> result = reverse_delete("mamma", "mia");
    bool areSame = true;
    if (result.size() != 2 || result[0] != "" || result[1] != "True")
        areSame = false;

    assert(areSame);
}