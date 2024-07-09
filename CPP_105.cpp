#include <vector>
#include <string>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> by_length(const std::vector<int>& arr) {
    std::vector<int> result;
    for (int num : arr) {
        int length = std::to_string(num).size();
        result.push_back(length);
    }
    return result;
}

int main() {
    std::vector<int> intArray = {9, 4, 8};
    assert(issame(by_length(intArray), std::vector<int>({std::to_string(9).size(), std::to_string(4).size(), std::to_string(8).size()})));
    return 0;
}