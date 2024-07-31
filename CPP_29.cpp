vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const string& str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
}