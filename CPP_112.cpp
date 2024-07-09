```cpp
#include <vector>
#include <string>

using namespace std;

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

    vector<string> final_result;
    final_result.push_back(res_str);
    final_result.push_back((is_palindrome ? "True" : "False"));
    return final_result;
}

int cpp112() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}