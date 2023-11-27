#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx") == vector<string>{"xxx", "xxxA", "xxx"});
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for (string str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}