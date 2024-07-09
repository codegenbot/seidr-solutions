Here is the solution:

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<pair<int, pair<int, int>>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, {j, i}});
            }
        }
    }
    sort(result.begin(), result.end());
    vector<vector<int>> output;
    for (const auto& p : result) {
        output.push_back({p.second.second, p.second.first});
    }
    return output;