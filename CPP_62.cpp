#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> v1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> v2[i];
    }

    double similaritySum = 0;
    int maxVal = *std::max_element(v1.begin(), v1.end());
    int minVal = *std::min_element(v1.begin(), v1.end());

    for (int i = 0; i < n; ++i) {
        double valDiff = std::abs(v1[i] - v2[i]);
        similaritySum += valDiff;
    }

    double similarityRatio = similaritySum / (n * (maxVal - minVal));
    std::cout << "Similarity between the two vectors is: " << similarityRatio << std::endl;

    return 0;
}