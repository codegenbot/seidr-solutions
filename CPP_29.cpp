#include <cassert>
#include <vector>
#include <iostream>
using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for (string str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

int main() {
    // Example test case
    vector<string> result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
    assert(result == vector<string>{"xxx", "xxxAAA", "xxx"});

    // Additional test cases
    vector<string> result1 = filter_by_prefix({"aaa", "bbb", "ccc", "aaaAE", "aac"}, "aaa");
    assert(result1 == vector<string>{"aaa", "aaaAE"});

    vector<string> result2 = filter_by_prefix({"abc", "def", "abcdef", "abcxyz"}, "abc");
    assert(result2 == vector<string>{"abc", "abcdef", "abcxyz"});

    cout << "All test cases passed!" << endl;

    return 0;
}