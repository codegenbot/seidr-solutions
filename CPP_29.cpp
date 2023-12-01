vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filteredStrings;
    for (string str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

bool issame_vector(vector<string> a, vector<string> b){
    // implementation of the issame function
}

int main() {
    assert (issame_vector(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    // additional test cases ...
}