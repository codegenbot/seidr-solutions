#include <vector>
#include <iostream>

std::vector<int> leaders(const std::vector<int>& vec) {
    int rightmost = vec.back();
    std::vector<int> leaders;
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= rightmost) {
            leaders.push_back(vec[i]);
            rightmost = vec[i];
        }
    }
    return leaders;
}

int main() {
    std::vector<int> vec = {17, 28, 4, 27, 3, 23};
    std::vector<int> leadersResult = leaders(vec);
    for (int leader : leadersResult) {
        std::cout << leader << " ";
    }
    return 0;
}