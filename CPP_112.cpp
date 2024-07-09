```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;

    // Delete all characters in s that are equal to any character in c
    for (char& ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            result.push_back(string(1, ch));
    }

    // Check if the result string is palindrome
    string res_str = "";
    for (string str : result)
        res_str += str;
    bool is_palindrome = false;
    int start = 0, end = res_str.length() - 1;
    while (start < end) {
        if (res_str[start] != res_str[end])
            break;
        start++;
        end--;
    }
    if (start >= end)
        is_palindrome = true;

    // Return the result
    vector<string> final_result;
    final_result.push_back(res_str);
    final_result.push_back(to_string(is_palindrome));
    return final_result;
}

int main() {
    vector<string> output = reverse_delete("mamma", "mia");
    if (!issame(output, {"", "True"})) {
        for (const string& str : output) {
            cout << str << endl;
        }
        assert(false);
    }
    return 0;
}