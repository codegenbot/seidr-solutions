#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

void sort_even(std::vector<float>& vec) {
    std::vector<float> temp;
    for (const auto& num : vec) {
        if (static_cast<int>(num) % 2 == 0) {
            temp.push_back(num);
        }
    }
    std::sort(temp.begin(), temp.end());
    int index = 0;
    for (auto& num : vec) {
        if (static_cast<int>(num) % 2 == 0) {
            num = temp[index];
            ++index;
        }
    }
}

int main() {
    std::vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(input);
    assert(issame(input, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));
    return 0;
}