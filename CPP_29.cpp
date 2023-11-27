#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"};
    vector<string> expected_output = {"xxx", "xxxAAA", "xxx"};
    vector<string> output = filter_by_prefix(input, "xxx");
    
    assert(output == expected_output);

    return 0;
}