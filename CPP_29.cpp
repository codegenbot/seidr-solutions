bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size() && i < b.size(); i++) {
        if (!contains(b[i], a[i]))
            return false;
    }
    for (int i = 0; i < b.size(); i++) {
        bool found = false;
        for (int j = 0; j < a.size(); j++) {
            if (contains(a[j], b[i])) {
                found = true;
                break;
            }
        }
        if (!found)
            return false;
    }
    return true;
}

bool contains(string a, string b) {
    return a.find(b) != string::npos;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}