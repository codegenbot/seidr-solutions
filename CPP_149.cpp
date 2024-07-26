bool issame(const vector<string>& a, const vector<string>& b) {
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
    vector<string> vec1 = {"apple", "banana", "orange"};
    vector<string> vec2 = {"banana", "orange", "apple"};

    if (issame(sorted_list_sum(vec1), sorted_list_sum(vec2))) {
        cout << "Lists are the same after sorting and filtering." << endl;
    } else {
        cout << "Lists are different after sorting and filtering." << endl;
    }

    return 0;
}