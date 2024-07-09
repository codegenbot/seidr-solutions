```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> order_by_points(std::vector<std::pair<int, int>> points) {
    std::sort(points.begin(), points.end(), [](const auto& a, const auto& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    });
    std::vector<int> result;
    for (const auto& point : points) {
        result.push_back(point.first);
    }
    return result;
}

int solution() { 
    int n; 
    std::cin >> n; 
    std::vector<std::pair<int, int>> points(n); 
    for (auto &point : points) { 
        std::cin >> point.first >> point.second; 
    } 

    std::vector<int> sorted_points = order_by_points(points); 
    int same_count = 0; 
    for (int i = 1; i < sorted_points.size(); i++) {
        if (!issame({sorted_points[i-1], points[i-1].second}, {sorted_points[i], points[i].second})) {
            break;
        }
        same_count++;
    } 

    std::cout << same_count << std::endl; 
    return 0; 
}