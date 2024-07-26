bool issame(vector<string> a, const vector<string>& b) {
    return a == b;
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
    vector<string> input = {"apple", "banana", "orange", "grape", "kiwi"};
    vector<string> output = sorted_list_sum(input);
    for (const string& s : output) {
        cout << s << " ";
    }
    return 0;
}