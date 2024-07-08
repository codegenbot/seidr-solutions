#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"};
    string prefix = "xxx";
    vector<string> expected = {"xxx", "xxxAAA", "xxx"};

    vector<string> result = filter_by_prefix(strings, prefix);

    if (!issame(result, expected)) {
        std::cerr << "Test failed. Expected: " << expected[0] << ", but got: " << result[0] << std::endl;
        return 1; // Exit with error code
    }

    return 0;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}