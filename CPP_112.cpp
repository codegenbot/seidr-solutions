#include <vector>
#include <string>
#include <set>

bool issame(std::vector<std::string>, std::vector<std::string>);

std::vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    set<char> c_set(c.begin(), c.end());
    
    string temp = "";
    
    for (char ch : s) {
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    bool is_palindrome = true;
    int left = 0, right = temp.length() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
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
    assert(issame(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}