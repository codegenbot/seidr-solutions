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
    vector<string> input;
    string sub;

    cin >> sub; // read substring from user

    // filter input based on the given substring
    vector<string> output = filter_by_substring(input, sub);

    for (const auto& str : output) {
        cout << str << endl;
    }

    return 0;
}