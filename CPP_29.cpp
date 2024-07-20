#include <vector>
#include <string>
#include <cassert>

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filtered_strings;
    for (const string& str : strings) {
        if (str.find(prefix) == 0) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAA", "xxx"}, "xxx") == 
            vector<string>{"xxx", "xxxAA", "xxx"});
    return 0;
}