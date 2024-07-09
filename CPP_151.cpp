#include <vector>
#include <cassert>

float doubleTheDifference(std::vector<float> lst) {
    float odd_sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        if (i % 2 != 0) {
            odd_sum += lst[i];
        }
    }
    return odd_sum * 2;
}

int main() {
    std::vector<float> lst = {1.0f, 2.5f, -3.5f, 4.0f};
    float result = doubleTheDifference(lst);
    assert(result == 0); 
    return 0;
}