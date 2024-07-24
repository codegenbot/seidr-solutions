bool issame(const vector<string>& a, const vector<string>& b) {
    return accumulate(a.begin(), a.end(), 0, [](int sum, const string& s) { return sum + s.length(); }) ==
           accumulate(b.begin(), b.end(), 0, [](int sum, const string& s) { return sum + s.length(); });
}

int sorted_list_sum(const vector<string>& lst) {
    vector<string> new_lst = lst;
    new_lst.erase(remove_if(new_lst.begin(), new_lst.end(),
                            [](const string& s) { return s.length() % 2 != 0; }), new_lst.end());
    sort(new_lst.begin(), new_lst.end(),
         [](const string& a, const string& b) { return a.length() == b.length() ? a < b : a.length() < b.length(); });
    return accumulate(new_lst.begin(), new_lst.end(), 0, [](int sum, const string& s) { return sum + s.length(); });
}

int main() {
    // Your main function code here
    return 0;
}