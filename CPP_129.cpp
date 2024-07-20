std::vector<int> minPath(const std::vector<std::vector<int>>& grid, int k){
    std::vector<int> result;
    for(int i = 0; i < k; ++i){
        for(const auto& row : grid){
            for(int num : row){
                result.push_back(num);
            }
        }
    }
    return result;
}