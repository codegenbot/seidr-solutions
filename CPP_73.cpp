int main() { 
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    std::cout << smallest_change(arr) << std::endl;
    return 0;
}