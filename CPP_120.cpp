int main() {
    std::vector<int> arr;
    int k;

    std::cout << "Enter elements of the array: ";
    int num;
    while (std::cin >> num) {
        arr.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    std::cout << "Enter value of k: ";
    std::cin >> k;

    std::vector<int> result = maximum(arr, k);

    for (int elem : result) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    assert(issame(result, {243, 3, 2}));

    return 0;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.rbegin(), arr.rend());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}