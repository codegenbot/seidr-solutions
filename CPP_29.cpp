bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), vector<string>{"xxx", "xxxAAA", "xxx"}));
    return 0;
}