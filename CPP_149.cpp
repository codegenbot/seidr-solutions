bool issame(const vector<string>& a, const vector<string>& b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> new_lst = lst;
    new_lst.erase(remove_if(new_lst.begin(), new_lst.end(), [](const string& s){ return s.length() % 2 != 0; }), new_lst.end());
    sort(new_lst.begin(), new_lst.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return new_lst;
}

int main() {
    vector<string> lst = {"apple", "banana", "orange", "grape", "kiwi"};
    vector<string> result = sorted_list_sum(lst);
    if (issame(lst, result)) {
        cout << "Lists are the same" << endl;
    } else {
        cout << "Lists are different" << endl;
    }
    return 0;
}