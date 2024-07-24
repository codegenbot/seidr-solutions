Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = s;
    for (char& ch : temp) {
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
    string res = "";
    for (int i = 0; i < result.size(); i++) {
        res += result[i];
    }
    bool is_palindrome = true;
    int left = 0, right = res.length() - 1;
    while (left < right) {
        if (res[left] != res[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    result.push_back(res);
    result.push_back((is_palindrome ? "True" : "False"));
    return result;