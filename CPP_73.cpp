int main() {
    std::vector<int> input;
    int value;
    while (std::cin >> value) {
        input.push_back(value);
    }
    
    assert(Solution::smallest_change(input) == 1); // Proper assert statement
    
    return 0;
}