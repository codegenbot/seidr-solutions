#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, const string& substring) {
    vector<string> filteredStrings;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == vector<string>{"grunt", "prune"});