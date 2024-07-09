vector<string> reverse_delete(string s, string c) {
    vector<string> result;

    // Remove all characters in s that are equal to any character in c
    string new_s = "";
    for (char c_s : s) {
        bool found = false;
        for (char c_c : c) {
            if (c_s == c_c) {
                found = true;
                break;
            }
        }
        if (!found) {
            new_s += c_s;
        }
    }

    // Check if the result string is palindrome
    bool is_palindrome = true;
    int left = 0, right = new_s.length() - 1;
    while (left < right) {
        if (new_s[left] != new_s[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }

    // Return the result
    vector<string> res(2);
    res[0] = new_s;
    res[1] = (is_palindrome ? "True" : "False");
    return res;
}