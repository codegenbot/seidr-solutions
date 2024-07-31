#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    cout << "Test passed" << endl;
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}