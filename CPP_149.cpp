bool issame(vector<string> a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst1, const vector<string>& lst2) {
    vector<string> lst = lst1;
    lst.insert(lst.end(), lst2.begin(), lst2.end());
    
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
    vector<string> list1 = {"apple", "banana", "orange"};
    vector<string> list2 = {"pear", "grapes", "kiwi"};

    if (issame(list1, list2)) {
        cout << "The lists are the same" << endl;
    } else {
        cout << "The lists are different" << endl;
    }

    vector<string> result = sorted_list_sum(list1, list2);
    
    for (const auto& str : result) {
        cout << str << " ";
    }

    return 0;
}