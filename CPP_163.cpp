#include <vector>

std::vector<int> issame(int a, int b);
std::vector<int> issame(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}