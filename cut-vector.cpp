int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += vec[i];
    }

    int leftSum = 0;
    int rightSum = totalSum;
    int minDifference = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n; ++i) {
        leftSum += vec[i];
        rightSum -= vec[i];

        int difference = abs(leftSum - rightSum);
        if (difference < minDifference) {
            minDifference = difference;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << vec[i] << " ";
    }

    return 0;
}