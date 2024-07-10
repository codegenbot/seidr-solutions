#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input = {"grunt", "trumpet", "prune", "gruesome"};
    vector<string> result = filter_by_substring(input, "run");

    for (const auto& str : result) {
        cout << str << endl;
    }

    return 0;
}