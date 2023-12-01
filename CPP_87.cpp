vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    
    // Sort coordinates by rows in ascending order
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b){
        return a[0] < b[0];
    });
    
    // Sort coordinates of the same row by columns in descending order
    for (int i = 0; i < result.size(); i++) {
        sort(result[i].begin(), result[i].end(), greater<int>());
    }
    
    return result;
}