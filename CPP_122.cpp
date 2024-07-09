int main
{
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    int k;
    std::cout << "Enter the number of elements to sum: ";
    std::cin >> k;
    int result = add_elements(arr, k);
    std::cout << "Sum of elements: " << result << std::endl;
}