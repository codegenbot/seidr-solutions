```cpp
bool issame(vector<string> a,vector<string>b){
    return a.size() == b.size() && equal(a.begin(), a.end(),b.begin());
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}
int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::string prefix = "xxx";
    std::vector<std::string> b = filter_by_prefix(strings, prefix);
    assert (issame(b , {"xxx", "xxxAAA", "xxx"}));
}