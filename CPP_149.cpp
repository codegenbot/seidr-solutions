vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> odd_length_strings;
    for (const string& s : lst) {
        if (s.length() % 2 == 1)
            odd_length_strings.push_back(s);
    }
    sort(odd_length_strings.begin(), odd_length_strings.end());
    return odd_length_strings;
}