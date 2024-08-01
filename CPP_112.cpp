```cpp
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    string t = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            t += ch;
        }
    }

    result.push_back(t);
    
    string revT = t;
    std::reverse(revT.begin(), revT.end());
    
    result.push_back((t == revT) ? "True" : "False");
    
    return result;
}