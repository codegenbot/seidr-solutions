bool issame(string a, string b) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < a.length(); i++) {
        sum1 += (a[i] - '0');
    }
    for (int i = 0; i < b.length(); i++) {
        sum2 += (b[i] - '0');
    }
    return sum1 == sum2;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0 || issame(str, "1")) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;
}