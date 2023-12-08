```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

/*
    Task Description:
    Given a vector of strings "strings" and a prefix string "prefix",
    implement a function "filter_by_prefix" that returns a new vector
    containing only the strings from the input vector that start with
    the given prefix.

    Function Signature:
    vector<string> filter_by_prefix(vector<string> strings, string prefix)

    Input:
    - vector<string> strings: A vector of strings (1 <= strings.size() <= 1000)
    - string prefix: The prefix to filter by (1 <= prefix.length() <= 100)

    Output:
    - vector<string>: A new vector containing only the strings that start with the prefix

    Example:
    filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") should return {"xxx", "xxxAAA", "xxx"}
*/

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filteredStrings;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

int main() {
    // Test the filter_by_prefix function
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));

    cout << "All test cases passed!" << endl;

    return 0;
}
```