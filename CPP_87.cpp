std::vector<int> get_row(std::vector<std::vector<int>> lst, int x){
    std::vector<int> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    result.push_back(-1);
    result.push_back(-1);
    return result;
}