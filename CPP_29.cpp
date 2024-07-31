```cpp
#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

std::vector<std::string> filterByPrefix(const vector<string>& strings, const string& prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool areEqual(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
string prefix = "xxx";
vector<string> filteredStrings = filterByPrefix(strings, prefix);
bool result = areEqual(filteredStrings, {"xxx", "xxxAAA", "xxx"});
assert(areEqual(filterByPrefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));