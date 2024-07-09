```cpp
int main() {
    bool same_chars(const string& s1, const string& s2) {
        if (s1.length() != s2.length()) return false;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1 == s2;
    }
    cout << (same_chars("aabb", "aaccc") ? "True" : "False");
    return 0;
}