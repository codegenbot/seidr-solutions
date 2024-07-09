#include <vector>
#include <cassert>

float double_the_difference(const std::initializer_list<float>& lst) {
    float odd_sum = 0;
    for (const auto& val : lst) {
        if (std::abs(std::fmod(val, 1.0)) > 0.5f) {
            odd_sum += val;
        }
    }
    return std::abs(odd_sum - (lst.begin()->float() + *(lst.end())));
}

int main() {
    float lst[] = {1.0f, 2.5f, -3.5f, 4.0f};
    std::vector<float> vec(lst, lst+sizeof(lst)/sizeof(float));
    assert(double_the_difference(vec) == 0);
}