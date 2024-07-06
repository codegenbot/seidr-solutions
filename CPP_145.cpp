```cpp
#include <algorithm>
#include <vector>
#include <string>

std::vector<int> order_by_points(std::vector<int> nums) {
    auto compare = [&](int a, int b) {
        if (a == b) return 0;
        long sumA = 0, sumB = 0;
        bool isANeg = false, isBNeg = false;

        std::string strA = std::to_string(a);
        std::string strB = std::to_string(b);

        if (strA[0] == '-') {
            isANeg = true;
            for (char c : strA.substr(1)) sumA += c - '0';
        } else {
            for (char c : strA) sumA += c - '0';
        }

        if (strB[0] == '-') {
            isBNeg = true;
            for (char c : strB.substr(1)) sumB += c - '0';
        } else {
            for (char c : strB) sumB += c - '0';
        }

        if ((isANeg && !isBNeg) || (!isANeg && isBNeg))
            return -1;
        if (sumA != sumB)
            return sumA - sumB > 0 ? 1 : -1;
        return distance(nums.begin(), find(nums.begin(), nums.end(), a)) -
               distance(nums.begin(), find(nums.begin(), nums.end(), b));
    };
    std::vector<int> res = nums;
    sort(res.begin(), res.end(), compare);
    return res;
}