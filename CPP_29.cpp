#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(const vector<string>& vec, const string& prefix) {
    vector<string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

auto result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
assert(result == vector<string>{"xxx", "xxxAAA", "xxx"});