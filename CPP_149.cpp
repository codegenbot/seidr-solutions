bool issame(const vector<string>& first, const vector<string>& second) {
    return first.size() == second.size();
}

vector<string> sorted_list_sum(vector<string>& lst);

int main() {
    vector<string> input = {"abc", "def", "ghi", "jklmn", "opqrs"};
    vector<string> result = sorted_list_sum(input);

    for (const string& s : result) {
        cout << s << " ";
    }

    return 0;
}

vector<string> sorted_list_sum(vector<string>& lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){return s.length() % 2 != 0;}), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}