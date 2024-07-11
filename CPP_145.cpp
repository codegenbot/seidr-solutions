#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> order_by_points(const std::vector<int>& input) {
    std::vector<int> output = input;
    std::sort(output.begin(), output.end());
    return output;
}

int main() {
    std::vector<int> input = {0,6,6,-76,-21,23,4};
    std::cout << "[";
    for(int i : order_by_points(input)) {
        std::cout << i << ", ";
    }
    std::cout << "]\n";
    return 0;
}