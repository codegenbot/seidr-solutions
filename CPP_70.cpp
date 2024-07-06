#include <iostream>
#include <vector>

bool std::operator==(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<int> strange_sort_list(std::vector<int> vec) {
    // Your implementation here
    for (int i = 0; i < vec.size() - 1; ++i) {
        for (int j = 0; j < vec.size() - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
    return vec;
}

int main() {
    std::vector<int> input = {111111};
    assert(std::equal(strange_sort_list(input).begin(), strange_sort_list(input).end(), input.begin()));
    return 0;
}