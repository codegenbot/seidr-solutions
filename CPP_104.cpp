#include <vector>
#include <algorithm>

bool operator==(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<int> unique_digits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp != 0) {
            if ((temp % 10) % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(std::sort(std::vector<int>(unique_digits({135, 103, 31})).begin(),
                     std::vector<int>(unique_digits({135, 103, 31})).end()) ==
           std::sort(std::vector<int>({31, 135}).begin(), std::vector<int>({31, 135}).end()));
    return 0;
}