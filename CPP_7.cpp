#include <iostream>
#include <vector>
#include <string>

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
    vector<string> test1 = {"grunt", "trumpet", "prune", "gruesome"};
    vector<string> expected1 = {"grunt", "prune"};

    assert(filter_by_substring(test1, "run") == expected1);

    cout << "All tests passed!" << endl;
    return 0;
}