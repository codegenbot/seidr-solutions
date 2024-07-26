bool issame(vector<string> a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){ return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    vector<string> list1 = {"apple", "banana", "orange"};
    vector<string> list2 = {"kiwi", "pear", "grape"};
    
    vector<string> result1 = sorted_list_sum(list1);
    vector<string> result2 = sorted_list_sum(list2);
    
    if (issame(result1, result2)) {
        cout << "The sorted lists have the same elements." << endl;
    } else {
        cout << "The sorted lists have different elements." << endl;
    }
    
    return 0;
}