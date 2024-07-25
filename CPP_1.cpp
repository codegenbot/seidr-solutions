#include <vector>
#include <string>
#include <sstream>

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stringstream ss(paren_string);
    string temp;
    
    while (getline(ss, temp, '(')) {
        if (temp.empty()) continue;
        result.push_back("(" + temp);
    }

    return result;
}