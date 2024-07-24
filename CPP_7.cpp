```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

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
    vector<string> strings = {"apple", "banana", "orange", "grape"};
    string substring = "ap";
    vector<string> filtered_strings = filter_by_substring(strings, substring);

    if (issame(filtered_strings, {"apple"})) {
        cout << "The filtered strings are the same as expected." << endl;
    } else {
        cout << "The filtered strings are not the same as expected." << endl;
    }

    return 0;
}