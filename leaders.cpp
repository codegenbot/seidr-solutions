```c++
#include <vector>

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

int main() {
    return 0;
}