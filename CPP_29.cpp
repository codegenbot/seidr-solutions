#include <vector>
#include <string>

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filteredStrings;
    
    for (const string& str : strings) {
        if (str.find(prefix) == 0) {
            filteredStrings.push_back(str);
        }
    }
    
    return filteredStrings;
}