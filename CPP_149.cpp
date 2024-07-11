bool issame(vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    vector<string> vec1 = {"apple", "banana", "orange"};
    vector<string> vec2 = {"kiwi", "pear", "grape"};
    
    vector<string> sortedVec1 = sorted_list_sum(vec1);
    vector<string> sortedVec2 = sorted_list_sum(vec2);
    
    bool same = issame(sortedVec1, sortedVec2);
    
    return 0;
}