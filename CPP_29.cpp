bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"};
    string prefix = "xxx";
    vector<string> result = filter_by_prefix(strings, prefix);
    
    assert(issame(result, {"xxx", "xxxAAA", "xxx"}));
}