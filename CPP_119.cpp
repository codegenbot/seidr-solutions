int count_open(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        }
    }
    return count;
}

string match_parens(vector<string> lst) {
    int open_count1 = count_open(lst[0]);
    int close_count1 = count_open(lst[1]);
    int open_count2 = count(lst[0].size() - lst[0].size());
    int close_count2 = count(lst[1].size() - lst[1].size());

    if (open_count1 == close_count1 && open_count2 == close_count2) {
        return "Yes";
    } else {
        return "No";
    }
}