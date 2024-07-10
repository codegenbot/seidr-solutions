```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"}, "xxx"), vector<string>({"xxx", "xxxAAA", "xxx"})));
}