bool same_chars(string s0, string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    
    return s0 == s1;
}

int main() {
    string s0, s1;
    cin >> s0 >> s1;
    
    cout << same_chars(s0, s1) << endl;
    
    return 0;
}