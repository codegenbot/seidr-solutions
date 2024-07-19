bool issame(vector<string> a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> lst_copy = lst;
    lst_copy.erase(remove_if(lst_copy.begin(), lst_copy.end(), [](const string& s) { return s.length() % 2 != 0; }), lst_copy.end());
    sort(lst_copy.begin(), lst_copy.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst_copy;
}

int main() {
    vector<string> vec1 = {"apple", "banana", "orange"};
    vector<string> vec2 = {"apple", "banana", "orange"};

    if (issame(vec1, vec2)) {
        cout << "The vectors are the same" << endl;
    } else {
        cout << "The vectors are different" << endl;
    }

    return 0;
}