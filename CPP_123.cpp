int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> odd_collatz = get_odd_collatz(n);
    std::vector<int> expected_output = {1}; // Fill in the expected output
    
    if (issame(odd_collatz, expected_output)) {
        std::cout << "Correct output\n";
    } else {
        std::cout << "Incorrect output\n";
    }
    
    return 0;
}