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
    string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    bool isPalindrome = false;
    int start = 0, end = temp.length() - 1;
    while (start < end) {
        if (temp[start] != temp[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    result.push_back(isPalindrome ? "True" : "False");
    return result;
}