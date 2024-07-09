vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        int sum = 0;
        for (char c : str) {
            sum += (c - '0');
        }
        if (sum % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;