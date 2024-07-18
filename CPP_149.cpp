vector<string> sorted_list_sum(vector<string> a, vector<string> b) {
    a.insert(a.end(), b.begin(), b.end());
    
    a.erase(remove_if(a.begin(), a.end(), [](const string& s) { return s.length() % 2 != 0; }), a.end());
    
    sort(a.begin(), a.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    return a;
}

int main() {
    vector<string> a = {"apple", "orange", "banana"};
    vector<string> b = {"kiwi", "grape", "peach"};
    
    vector<string> result = sorted_list_sum(a, b);
    
    for (const auto& str : result) {
        cout << str << " ";
    }

    return 0;
}