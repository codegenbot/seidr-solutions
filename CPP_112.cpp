#include <string>
#include <algorithm>
#include <vector>

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
    
    string str = temp;
    reverse(str.begin(), str.end());
    
    result.push_back(temp);
    result.push_back((temp == str) ? "True" : "False");
    
    return result;
}