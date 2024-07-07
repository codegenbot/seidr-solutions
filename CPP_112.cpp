#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    for (char c1 : c) {
        s.erase(remove(s.begin(), s.end(), c1), s.end());
    }
    
    string temp = s;
    reverse(temp.begin(), temp.end());
    if (s == temp) {
        result.push_back(s);
        result.push_back("True");
    } else {
        result.push_back(s);
        result.push_back("False");
    }
    
    return result;
}