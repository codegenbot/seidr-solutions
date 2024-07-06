#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    string prefix = "xxx";
    
    vector<string> expected_result = {"xxx", "xxxAAA", "xxx"};
    vector<string> actual_result = filter_by_prefix(strings, prefix);
    
    assert(same(actual_result, expected_result));
    return 0;
}