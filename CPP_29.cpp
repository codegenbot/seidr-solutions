#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> v){
    return a == v;
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    string prefix = "xxx";
    vector<string> result = filter_by_prefix(strings, prefix);
    
    assert (issame(result , vector<string> {"xxx", "xxxAAA", "xxx"}));
}