bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(std::equal(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx").begin(), filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx").end(), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}