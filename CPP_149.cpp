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
    vector<string> lst1 = {"apple", "banana", "orange"};
    vector<string> lst2 = {"peach", "strawberry", "kiwi"};

    if (issame(lst1, lst2)) {
        cout << "Lists are same\n";
    } else {
        cout << "Lists are different\n";
    }

    vector<string> result = sorted_list_sum(lst1, lst2);
    for (const string& elem : result) {
        cout << elem << "\n";
    }

    return 0;
}