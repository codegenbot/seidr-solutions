```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}
int main() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    vector<string> expected = {"xxx", "xxxAAA", "xxx"};
    
    assert(issame(filter_by_prefix(input, "xxx"), expected));
}