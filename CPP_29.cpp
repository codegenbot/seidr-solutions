#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b, vector<string> c){
    if((a==b) && (c==a))
        return true;
    else
        return false;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}