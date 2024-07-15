bool issame(const std::vector<int>& a, const std::vector<int>& b){
    assert(minPath({{1, 3}, {3, 2}}, 10) == std::vector<std::pair<int, int>>{{1, 0}, {1, 1}});
    assert(minPath({{1, 3}, {3, 2}}, 10) == std::vector<std::pair<int, int>>{{1, 0},{0, 0}});
}