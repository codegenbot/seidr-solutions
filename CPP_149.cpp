vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> evenLengthStrings;
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            evenLengthStrings.push_back(str);
        }
    }

    sort(evenLengthStrings.begin(), evenLengthStrings.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return evenLengthStrings;
}

int test() {
    vector<string> input = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> expected = {"cc", "dd", "aaaa", "bbbb"};
    assert(sorted_list_sum(input) == expected);
}