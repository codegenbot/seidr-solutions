#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> v){
    return a == v;
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    string prefix = "xxx";
    vector<string> result = filter_by_prefix(strings, prefix);
    
    assert (issame(result , {"xxx", "xxxAAA", "xxx"}));
    // ...
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}