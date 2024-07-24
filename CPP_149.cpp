bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int sorted_list_sum(const vector<string>& lst) {
    int sum = 0;
    for (const auto& s : lst) {
        sum += stoi(s);
    }
    return sum;
}

int main() {
    vector<string> lst = {"123", "45", "6789", "0", "12"};
    
    lst.erase(remove_if(lst.begin(), lst.end(), 
        [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) { return a.length() == b.length() ? a < b : a.length() < b.length(); });
    
    cout << "Sorted list sum: " << sorted_list_sum(lst) << endl;
    
    return 0;
}