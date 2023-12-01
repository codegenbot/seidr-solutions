#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> filtered_strings = {};
    
    for (const string& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filtered_strings.push_back(str);
        }
    }
    
    return filtered_strings;
}