bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < min(a.size(), b.size()); i++) {
        if (!a[i].compare(b[i]))
            return false;
    }
    return a.size() == b.size();
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}