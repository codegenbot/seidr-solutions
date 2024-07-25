#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
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
    result.push_back(temp);
    
    string reverseTemp = "";
    for(int i = temp.length() - 1; i >= 0; i--) {
        reverseTemp += temp[i];
    }
    
    if (temp == reverseTemp) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}