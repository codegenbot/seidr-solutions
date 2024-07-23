int main() {
    // Test cases for gcd
    int a = 48, b = 18;
    int result = gcd(a, b);
    std::cout << "GCD of " << a << " and " << b << " is: " << result << std::endl;

    // Test cases for indicesOfSubstring
    std::string text = "abababab";
    std::string target = "aba";
    std::vector<int> indices = indicesOfSubstring(text, target);
    std::cout << "Indices of substring '" << target << "' in text '" << text << "': ";
    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}