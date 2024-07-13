bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             int sum1 = 0, sum2 = 0;
             for (char c : a) sum1 += c;
             for (char c : b) sum2 += c;
             return sum1 < sum2;
         });
    return result;
}