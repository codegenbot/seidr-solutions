int main() {
    int k;
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    std::vector<int> vec(k);
    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> vec[i];
    }
    int result = add_elements(vec, k);
    std::cout << "Sum of elements with lengths less than or equal to 2: " << result << std::endl;
    return 0;
}