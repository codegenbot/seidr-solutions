#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    for (int i = 0; i < c.length(); i++) {
        s.erase(remove(s.begin(), s.end(), c[i]), s.end());
    }
    
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    bool is_palindrome = (s == reverse_s);
    
    result.push_back(s);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}