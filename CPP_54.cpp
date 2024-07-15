bool same_chars(const char* s0, const char* s1) {
    return sorted_string(s0) == sorted_string(s1);
}

string sorted_string(const char* s) {
    string sorted = s;
    sort(sorted.begin(), sorted.end());
    return sorted;
}