#include <vector>
#include <string>
#include <algorithm>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string my_string) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(my_string) == 0) {
            result.push_back(s);
        }
    };
}