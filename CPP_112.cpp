bool isPalindrome(vector<string> temp) {
    bool result = false;
    int start = 0, end = temp.size() - 1;
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
    string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    bool isPalindromeTemp = isPalindrome(vector<string>(temp.begin(), temp.end()));
    result.push_back(isPalindromeTemp ? "True" : "False");
    return result;
}