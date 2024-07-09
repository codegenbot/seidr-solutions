#include <iostream>
#include <vector>
#include <algorithm>

// Function to order points by their values
std::vector<int> order_by_points(std::vector<int> points) {
    std::sort(points.begin(), points.end());
    return points;
}

bool sameVectors(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> points = {0,6,6,-76,-21,23,4};
    std::vector<int> expected = {-76, -21, 0, 4, 6, 6, 23};
    
    if (!sameVectors(order_by_points(points), expected)) {
        // handle error
    }
}