```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;

}
int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"}, "xxx"), vector<string>({"xxx", "xxxAAA", "xxx"})));
}