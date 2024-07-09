vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

bool issame(const string& a, const string& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main() {
    vector<string> strings = {"abc", "abcd", "xyz"};
    string prefix = "ab";
    vector<string> result = filter_by_prefix(strings, prefix);
    for (string s : result) {
        cout << s << endl;
    }
}