#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool result = issame(a, b);
std::vector<int> incremented = incr_list(a);

std::cout << "Arrays are " << (result ? "equal" : "not equal") << std::endl;
for (int num : incremented) {
    std::cout << num << " ";
}

return 0;