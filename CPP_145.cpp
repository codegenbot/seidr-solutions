#include <vector>
#include <algorithm>
#include <cassert>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> std::order_by_points(std::vector<int> points){
    std::sort(points.begin(), points.end());
    return points;
}