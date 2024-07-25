```cpp
vector<vector<int>> get_coordinates(vector<vector<int>>& lst, int x) {
    vector<pair<int,int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(),
         [](const pair<int,int>& a, const pair<int,int>& b) {
             if (a.first != b.first) return a.first < b.first;
             else return a.second > b.second;
         });
    vector<vector<int>> coordinates;
    for(auto &p : result) {
        coordinates.push_back({p.first,p.second});
    }
    return coordinates;
}