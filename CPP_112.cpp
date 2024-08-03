bool isPalindrome(vector<string> str) {
    string temp = "";
    for (int i = 0; i < str.size(); i++) {
        temp += str[i];
    }
    bool result = false;
    int start = 0, end = temp.length() - 1;
    while (start < end) {
        if (temp[start] != temp[end]) {
            result = false;
            break;
        }
        start++;
        end--;
    }
    return result;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, ch));
        }
    }
    result.push_back(isPalindrome(result) ? "True" : "False");
    return result;
}