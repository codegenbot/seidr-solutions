#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    set<char> c_set; // declare before initializing
    
    c_set.insert(c.begin(), c.end());
    
    string res = "";
    
    for (char ch : s) {
        if (c_set.find(ch) == c_set.end()) {
            res += ch;
        }
    }
    
    bool check = true;
    int left = 0, right = res.length() - 1;
    while (left < right) {
        if (res[left] != res[right]) {
            check = false;
            break;
        }
        left++;
        right--;
    }
    
    result.push_back(res);
    result.push_back(check ? "True" : "False");
    
    return result;
}