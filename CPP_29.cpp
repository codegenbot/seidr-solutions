```cpp
bool isSame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(isSame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
}