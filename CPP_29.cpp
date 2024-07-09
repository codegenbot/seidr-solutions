#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // test the function
    vector<string> strings = {"abc", "bcd", "cde", "vector"};
    string prefix = "a";
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);

    cout << "Filtered strings: ";
    for (const auto& str : filtered_strings) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}