int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int k;
    std::cout << "Enter the number of elements to extract: ";
    std::cin >> k;

    if (k <= 0 || k > n) {
        std::cout << "Invalid operation. K should be between 1 and " << n << ".";
        return 1;
    }

    auto res = maximum(arr, k);
    for (int i : res)
        std::cout << i << " ";

    return 0;
}