#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string res_str = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            res_str += s[i];
        }
    }
    
    bool is_palindrome = true;
    int left = 0;
    int right = res_str.length() - 1;
    while (left < right) {
        if (res_str[left] != res_str[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    result.push_back(res_str);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}

bool compare_vectors(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(compare_vectors(reverse_delete("mamma", "mia"), {"", "True"}));
    
    return 0;
}