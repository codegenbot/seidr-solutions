#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}