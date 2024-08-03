#include <string>
#include <cassert>

string compareStrings(const string &a, const string &b) {
    assert(a.size() == b.size());
    
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            result += "0";
        } else {
            result += "1";
        }
    }
    return result;
}