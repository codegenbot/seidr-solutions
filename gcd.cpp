int main() {
    // Test cases for gcd
    int a = 48, b = 18;
    int result_gcd = gcd(a, b);
    std::cout << "GCD of " << a << " and " << b << " is " << result_gcd << std::endl;

    // Test cases for indicesOfSubstring
    std::string text = "abracadabracabra", target = "abra";
    std::vector<int> result_indices = indicesOfSubstring(text, target);
    std::cout << "Indices of '" << target << "' in '" << text << "': ";
    for (int index : result_indices) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}