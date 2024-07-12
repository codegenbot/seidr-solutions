bool issame(const string& s1, const string& s2) {
    return s1.length() == s2.length();
}

void assertEqual(bool condition, const char* message) {
    if (!condition) {
        throw runtime_error(message);
    }
}