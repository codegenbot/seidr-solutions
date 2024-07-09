#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> filtered = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");

    // Output the filtered strings
    for (const auto& str : filtered) {
        cout << str << " ";
    }

    return 0;
}