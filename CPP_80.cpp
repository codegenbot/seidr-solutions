int main() {
    string s;
    cin >> s;

    bool is_happy = (s.length() >= 3) && all_of(s.begin(), s.end(), [a](char c){ return count(c, s.begin(), s.end()) == 1; });

    cout << (is_happy ? "true" : "false") << endl;
}