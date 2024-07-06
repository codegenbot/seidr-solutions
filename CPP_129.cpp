int main() {
    std::vector<std::vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    std::vector<int> result = minPath(grid, k);
    for (auto val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}