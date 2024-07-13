bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        int sum = 0;
        for (char c : str) {
            sum += c;
        }
        if (sum % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             return std::to_string(a).size() + std::accumulate(a.begin(), a.end(), 0) <
                    std::to_string(b).size() + std::accumulate(b.begin(), b.end(), 0);
         });
    return result;
}