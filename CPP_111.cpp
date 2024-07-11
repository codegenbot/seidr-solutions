map<char, int> histogram(string test);
bool issame(const map<char, int>& a, const map<char, int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}