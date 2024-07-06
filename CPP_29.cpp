```cpp
bool issame(vector<string> a, vector<string> b); //{
vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> a = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    vector<string> b = filter_by_prefix(a, "xxx");
    assert(issame(b, {"xxx", "xxxAAA", "xxx"}));
    return 0;
}