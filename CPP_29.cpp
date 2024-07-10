bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(!filter_by_prefix({a[i], b[i]}, a[i]).size())
            return false;
    }
    return true;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAC", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}