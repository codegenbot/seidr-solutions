bool issame(vector<string> a, const vector<string>& b) {
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
    vector<string> a = {"apple", "banana", "orange"};
    vector<string> b = {"apple", "banana", "orange"};
    
    if (issame(a, b)) {
        cout << "The vectors are the same." << endl;
    } else {
        cout << "The vectors are different." << endl;
    }
    
    return 0;
}