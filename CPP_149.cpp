bool issame(const string& a, const string& b) {
    return (a.length() == b.length()) && (a == b);
}

void test() {
    vector<string> lst = {"abc", "abcd", "abe", "abef"};
    vector<string> result = sorted_list_sum(lst);

    assert(issame(result[0], "abcd") || 
           issame(result[0], "abe"));
}