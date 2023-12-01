#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    // implementation of the issame function
    // ...
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> filtered_strings;
    
    for (const string& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filtered_strings.push_back(str);
        }
    }
    
    return filtered_strings;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    
    return 0;
}