```cpp
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    set<char> c_set(c.begin(), c.end());
    
    string temp = "";
    
    for (char ch : s) {
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    bool is_palindrome = false;
    if (temp.length() > 0) {
        string rev_temp = temp;
        reverse(rev_temp.begin(), rev_temp.end());
        is_palindrome = temp == rev_temp;
    }
    
    result.push_back(temp);
    if (is_palindrome) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;

}

int main() {
    assert(issame({"" , "True"}, reverse_delete("mamma", "mia")));
    return 0;
}