#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Remove characters from s that are equal to any character in c
    string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    
    // Check if the result string is palindrome
    string str = temp;
    reverse(str.begin(), str.end());
    if (str == temp) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }
    
    return result;
}