#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    string prefix;
    cin >> prefix;
    
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"};
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);

    for (const auto& str : filtered_strings) {
        cout << str << endl;
    }

    return 0;
}