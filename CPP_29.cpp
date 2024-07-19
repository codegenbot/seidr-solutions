#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> v){
    return a == v;
}

int main() {
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}