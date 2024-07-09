bool issame(string s1, string s2) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] % 2 == 0)
            sum1 += s1[i];
        else
            sum1 -= s1[i];
    }
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] % 2 == 0)
            sum2 += s2[i];
        else
            sum2 -= s2[i];
    }
    return sum1 == sum2;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (issame(str, "a")) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;
}