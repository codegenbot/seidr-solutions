if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> str, string prefix) {
    vector<string> result;
    for (string s : str) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}
int main() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    string prefix = "xxx";
    vector<string> b = filter_by_prefix(input, prefix);
    if(b.size() != 3) return false;
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}