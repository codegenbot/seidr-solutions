int main() {
    int n; 
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int result = prod_signs(arr, n);
    delete[] arr;

    std::cout << "The product of signs is: " << (result > 0) ? std::to_string(result) : "-" << std::endl;
    return 0;
}