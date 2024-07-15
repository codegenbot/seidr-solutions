extern int Solution::smallest_change(const std::vector<int>& arr);

int main() {
    assert(Solution::smallest_change({0, 1}) == 1);
  
    std::vector<int> input;
    int value;
    while (std::cin >> value) {
        input.push_back(value);
    }
    
    std::cout << Solution::smallest_change(input) << std::endl;

    return 0;
}