#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stringstream ss(paren_string);
    string temp;
    while (getline(ss, temp, '(')) {
        if (temp.empty()) continue;
        temp = "(" + temp;
        size_t pos = temp.find(')');
        if (pos != string::npos) {
            result.push_back(temp.substr(0, pos + 1));
            if (pos + 1 < temp.size()) {
                result.push_back(temp.substr(pos + 1));
            }
        }
    }
    return result;
}