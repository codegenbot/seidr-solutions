Here is the solution:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;

    // create a set from string c for efficient lookup
    set<char> c_set(c.begin(), c.end());

    // iterate over each character in string s
    string temp = "";
    for (char c : s) {
        if (find(c_set.begin(), c_set.end(), c) == c_set.end()) {
            temp += c;
        }
    }

    // check if the result string is palindrome
    bool is_palindrome = true;
    int start = 0, end = temp.length() - 1;
    while (start < end) {
        if (temp[start] != temp[end]) {
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }

    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    return result;
}