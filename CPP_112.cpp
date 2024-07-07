Here is the solution:

vector<string> reverse_delete(string s, string c) {
    vector<char> temp(s.begin(), s.end());
    for (char i : c) {
        auto it = find(temp.begin(), temp.end(), i);
        while (it != temp.end()) {
            temp.erase(it);
            break;
        }
    }
    string result_str = "";
    for (auto i : temp) {
        result_str += i;
    }
    
    bool is_palindrome = true;
    int left = 0, right = result_str.length() - 1;
    while (left < right) {
        if (result_str[left] != result_str[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    vector<string> result({result_str, (is_palindrome ? "True" : "False")});
    return result;
}