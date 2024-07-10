bool issame(const vector<string>& a, const vector<string>& b)
{
    return accumulate(a.begin(), a.end(), 0, [](int sum, const string& str) { return sum + stoi(str); }) ==
           accumulate(b.begin(), b.end(), 0, [](int sum, const string& str) { return sum + stoi(str); });
}

bool sorted_list_sum(vector<string>& lst)
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