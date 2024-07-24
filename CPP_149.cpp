bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> sorted_list_sum(vector<string>& lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), 
        [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) { return a.length() == b.length() ? a < b : a.length() < b.length(); });
    return lst;
}

int main() {
    // main function code goes here
    return 0;
}