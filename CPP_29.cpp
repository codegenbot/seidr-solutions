#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

/*
    Task Description:
    Given a vector of strings and a prefix string, write a function filter_by_prefix that returns a new vector
    containing only the strings that have the given prefix at the beginning.

    Function Signature:
    vector<string> filter_by_prefix(vector<string> strings, string prefix)

    Input:
    - A vector of strings: strings (1 <= strings.size() <= 1000)
    - A string: prefix (1 <= prefix.size() <= 100)

    Output:
    - A vector of strings: filteredStrings

    Example:
    filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") returns {"xxx", "xxxAAA", "xxx"}
    filter_by_prefix({"test", "apple", "banana", "application"}, "app") returns {"apple", "application"}
*/

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

int main() {
    // Test the filter_by_prefix function
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    assert(issame(filter_by_prefix({"test", "apple", "banana", "application"}, "app"), {"apple", "application"}));

    cout << "All test cases passed!" << endl;

    return 0;
}