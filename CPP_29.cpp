#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.compare(0, prefix.size(), prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

vector<string> expected_result = {"xxx", "xxxAAA", "xxx"};

vector<string> filtered_strings = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");

assert(filtered_strings == expected_result);

for (const auto& str : filtered_strings) {
    cout << str << " ";
}

return 0;