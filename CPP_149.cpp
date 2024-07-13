vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        if (stoi(s) % 2 == 0) {
            result.push_back(to_string(stoi(s) + 1));
        } else {
            result.push_back(s);
        }
    }
    sort(result.begin(), result.end());
    return result;
}