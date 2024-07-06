int main() {
    int k;
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    std::vector<int> vec;
    for (int i = 0; i < k; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        vec.push_back(num);
    }
    int result = add_elements(vec, k);
    std::cout << "Sum of elements with lengths less than or equal to 2: " << result << std::endl;
    return 0;
}