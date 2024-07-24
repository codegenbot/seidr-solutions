bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int sorted_list_sum(const vector<string>& lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), 
        [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) { return a.length() == b.length() ? a < b : a.length() < b.length(); });
    return lst;
}

int main() {
    // Your main function logic here
    return 0;
}