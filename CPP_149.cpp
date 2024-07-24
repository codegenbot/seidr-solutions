bool issame(const vector<string>& a, const vector<string>& b) {
    return accumulate(a.begin(), a.end(), 0, [](int sum, const string& s) { return sum + s.length(); }) == 
           accumulate(b.begin(), b.end(), 0, [](int sum, const string& s) { return sum + s.length(); });
}

bool sorted_list_sum(const vector<string>& lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), 
        [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) { return a.length() == b.length() ? a < b : a.length() < b.length(); });
    return lst;
}

int main() {
    // Main function
}