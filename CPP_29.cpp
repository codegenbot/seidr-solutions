#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool compare_vectors(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
}

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
    assert(compare_vectors(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}