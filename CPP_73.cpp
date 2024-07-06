int main() {
    int n;
    std::vector<int> arr;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        arr.push_back(x);
    }
    int result = smallest_change(arr);
    std::cout << "Smallest change: " << result << std::endl;
    return 0;
}