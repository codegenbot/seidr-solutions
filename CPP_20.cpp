#include <algorithm>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame({find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}) }, {{2.2f, 3.1f}}));
    return 0;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    std::vector<std::pair<float, float>> closest;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if ((numbers[i + 1] - numbers[i]) < (numbers.back() - numbers[0])) {
            closest = {{numbers[i], numbers[i + 1]}};
            break;
        } else if ((numbers[i + 1] - numbers[i]) == (numbers.back() - numbers[0])) {
            closest = {{numbers[0], numbers.back()}};
            break;
        }
    }
    return closest;
}