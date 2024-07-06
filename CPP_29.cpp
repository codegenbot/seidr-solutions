#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAACCEEEEEEEEAA", "xxx"};
    string prefix = "xxx";
    vector<string> result = filter_by_prefix(strings, prefix);
    for(const auto& str : result) {
        cout << str << endl;
    }
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}