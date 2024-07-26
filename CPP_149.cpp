bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> result = lst;
    result.erase(remove_if(result.begin(), result.end(), [](const string& s){ return s.length() % 2 != 0; }), result.end());
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    vector<string> lst = {"apple", "banana", "orange", "kiwi", "grape"};
    vector<string> sortedSum = sorted_list_sum(lst);
    for (const string& s : sortedSum) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}