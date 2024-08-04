int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;
    std::cin.ignore(); // Add this line to consume the newline character
    
    std::string text, target;
    getline(std::cin, text);
    getline(std::cin, target);

    int result_gcd = gcd(a, b);
    std::cout << result_gcd << std::endl;

    std::vector<int> result_substring = findIndicesOfSubstring(text, target);
    for (int i : result_substring) {
        std::cout << i << " ";
    }
    return 0;
}