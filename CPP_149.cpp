bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> result = lst;
    sort(result.begin(), result.end(), 
        [](const string& a, const string& b) { return a.length() == b.length() ? a < b : a.length() < b.length(); });
    return result;
}

int main() {
    vector<string> lst = {"apple", "banana", "orange", "grape"};
    lst.erase(remove_if(lst.begin(), lst.end(), 
        [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    
    vector<string> sorted_lst = sorted_list_sum(lst);
    
    return 0;
}