bool issame(vector<string> a, vector<string> b)
{
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst)
{
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main()
{
    vector<string> lst = {"apple", "banana", "kiwi", "orange", "pear"};
    vector<string> sorted_lst = sorted_list_sum(lst);
    for (const auto& str : sorted_lst) {
        cout << str << " ";
    }
    cout << endl;

    vector<string> a = {"apple", "banana"};
    vector<string> b = {"kiwi", "orange"};
    cout << "Are a and b the same? " << (issame(a, b) ? "Yes" : "No") << endl;

    return 0;
}