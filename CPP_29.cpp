int main() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"};
    string prefix = "xxx";
    vector<string> expected = {"xxx", "xxxAAA", "xxx"};
    vector<string> result = filter_by_prefix(input, prefix);
    assert(issame(result, expected));
    return 0;
}