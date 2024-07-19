bool issame(const string& a, const string& b) {
    return a.length() == b.length();
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (issame(str, "hello")) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end());

    return result;
}