int main() {
    std::vector<std::vector<int>> input;
    input.push_back({1, 3});
    input.push_back({3, 2});
    std::vector<int> output;
    
    if (minPath(input, 10).empty()) {
        std::cout << "No paths found with length 10." << std::endl;
        return 0; 
    }
    
    for (int i : minPath(input, 10)) {
        output.push_back(i);
    }
    bool same = issame(output, {1, 3, 1, 3, 1, 3, 1, 3, 1, 3});
    return 0;
}