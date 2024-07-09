bool issame(vector<string> a, vector<string> b) {
    // implement your logic here to check if a and b are same
    // for now, just return true
    return (a == b);
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}