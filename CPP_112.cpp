#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    set<char> cSet(c.begin(), c.end());
    
    string temp = "";
    
    for (char ch : s) {
        if (find(cSet.begin(), cSet.end(), ch) == cSet.end()) {
            temp += ch;
        }
    }
    
    bool check = (temp.compare(reverse(temp)) == 0);
    
    result.push_back(temp);
    result.push_back((check ? "True" : "False"));
    
    return result;
}

int main() {
    string s, c;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> c;
    vector<string> res = reverse_delete(s, c);
    cout << "Result string: " << res[0] << endl;
    cout << "Palindrome check: " << res[1] << endl;
    return 0;
}