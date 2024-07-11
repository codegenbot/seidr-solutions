int main() {
    int n; 
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int result = prod_signs(arr, n);
    delete[] arr;

    if (arr[0] == -1) {
        std::cout << "The product of signs is: ";
    } else {
        std::cout << "The product of signs is: -";
    }
    std::cout << std::to_string(result) << std::endl;
    return 0;
}