#include <algorithm>
#include <vector>

std::vector<int> order_by_points(int... nums) {
    auto compare = [&](int a, int b) {
        if (a == b) return 0;
        long sumA = 0, sumB = 0;
        for (char c : std::to_string(a)) sumA += c - '0';
        for (char c : std::to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        return distance(std::begin((int []){nums}), find(std::begin((int []){nums}), std::end((int []){nums}), a)) -
               distance(std::begin((int []){nums}), find(std::begin((int []){nums}), std::end((int []){nums}), b));
    };
    std::vector<int> v;
    for (auto num : {nums}) v.push_back(num);
    sort(v.begin(), v.end(), compare);
    return v;
}