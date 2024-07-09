int main() {
    int n;
    std::vector<int> arr;

    // Read the number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }

    int k;
    // Read the number of elements to be removed
    std::cout << "Enter the number of elements to remove: ";
    std::cin >> k;

    std::vector<int> result = maximum(arr, k);

    // Print the resulting array
    std::cout << "The resulting array is: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}