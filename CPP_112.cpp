#include <string>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    set<char> cSet; // Declare set variable here
    
    cSet.insert(c.begin(), c.end());
    
    string temp = "";
    
    for (char ch : s) {
        if (!cSet.count(ch)) {
            temp += ch;
        }
    }
    
    bool isPalindrome = false;
    int left = 0, right = temp.length() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    result.push_back(temp);
    result.push_back((isPalindrome ? "True" : "False"));
    
    return result;
}