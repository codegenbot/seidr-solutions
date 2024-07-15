bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

#include <cassert>

int main(){
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
}