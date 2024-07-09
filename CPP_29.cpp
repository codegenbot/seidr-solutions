```cpp
bool issame(vector<string> a,vector<string> b,vector<string> c){
    for(auto s : a) if(find(b.begin(),b.end(),s) == b.end() || find(c.begin(),c.end(),s) == c.end()) return false;
    return true;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}