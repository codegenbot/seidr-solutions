bool issame(vector<string> a, vector<string> b) {
    for(string s : a) {
        if(find(b.begin(), b.end(), s) == b.end())
            return false;
    }
    return true;
}

int main() {
    assert(issame({{"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}}, {"xxx", "xxxAAA", "xxx"}) == true);
    return 0;
}