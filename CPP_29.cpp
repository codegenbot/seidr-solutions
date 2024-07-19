#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix){
    vector<string> filtered_strings;
    for (const auto &s : strings) {
        if (s.find(prefix) == 0) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}

int main(){
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}