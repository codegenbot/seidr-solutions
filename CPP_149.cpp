vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> oddLengthStrings;
    for (const string& str : lst)
        if (str.length() % 2 == 1)
            oddLengthStrings.push_back(str);
    sort(oddLengthStrings.begin(), oddLengthStrings.end());
    return oddLengthStrings;
}