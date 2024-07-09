```c++
#include <vector>
#include <numeric>
#include <initializer_list>

int main() {
    std::vector<int> v(5);
    for (int i = 0; i < 5; i++) v[i] = i + 1;
    auto res = cutVector(v);
    for (const auto& sub : {res.first, res.second}) {
        for (int num : sub) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += v[i];
    }
    int minDiff = INT_MAX; 
    int leftIndex = 0;

    long long halfSum = totalSum / 2;
    if (totalSum % 2 != 0) {
        halfSum++;
    }

    for (int i = 0; i < n; i++) {
        while (i < n && totalSum > halfSum) {
            totalSum -= v[i];
            leftIndex = i + 1;
            if (totalSum == halfSum || abs(totalSum - halfSum) < minDiff) {
                minDiff = abs(totalSum - halfSum);
                break;
            }
        }
    }

    std::vector<int> first;
    for (int j = 0; j <= leftIndex; j++) {
        first.push_back(v[j]);
    }
    std::vector<int> second;
    if (totalSum != halfSum) {
        for (int j = leftIndex; j < n; j++) {
            second.push_back(v[j]); 
        }
    } else {
        second = first;
    }

    return {first, second};
}