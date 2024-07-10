#include <vector>
#include <cassert>
#include <string>
using namespace std;

bool are_same(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix);

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> test_strings = {"apple", "banana", "apricot", "pear"};
    vector<string> filtered = filter_by_prefix(test_strings, "ap");
    assert(filtered.size() == 2);
    return 0;
}