vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (stoi(str) % 2 == 0) {
            result.push_back(to_string(stoi(str) + 1));
        }
    }
    sort(result.begin(), result.end());
    return result;
}