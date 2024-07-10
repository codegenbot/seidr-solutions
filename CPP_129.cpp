int main() {
    std::vector<std::vector<int>> input = {{1, 3}, {3, 2}};
    int target = 10;
    std::vector<int> result = minPath(input, target);
    bool same = issame(result, {1, 3, 1, 3, 1, 3, 1, 3, 1, 3});
    
    return 0;
}