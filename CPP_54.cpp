bool same_chars(string s0, string s1) {
    // Sort both strings
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());

    // Check if the sorted strings are equal
    return s0 == s1;
}