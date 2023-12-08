#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix){
    vector<string> filteredStrings;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));

    cout << "All test cases passed!" << endl;

    return 0;
}