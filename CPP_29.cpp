#include <cassert>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix);

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for(const string &str : strings) {
        if(str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"};
    vector<string> expected_output = {"xxx", "xxxAAA", "xxx"};
    auto result = filter_by_prefix(input, "xxx");

    for(const auto &str : result) {
        cout << str << endl;
    }

    return 0;
}