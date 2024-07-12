bool issame(const string& a, const string& b) {
    if (a.length() == b.length()) {
        for (size_t i = 0; i < a.length(); ++i) {
            if (a[i] != b[i]) return false;
        }
        return true;
    } else {
        return false;
    }
}

int main() {
    assert(issame("hello", "aloha") == true);
    assert(issame("abc", "def") == false);
    // ... other tests
    return 0;
}