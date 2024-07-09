#include <cassert>

using namespace std;

#include <algorithm>
#include <string>
#include <vector>

bool areSame(const vector<string>& a) {
    return (a.size() == 1);
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}