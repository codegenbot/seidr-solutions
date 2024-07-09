#include <algorithm>
#include <vector>

namespace myspace {
    bool issame(const std::vector<float>& a, const std::vector<float>& b) {
        if(a.size() != b.size()) return false;
        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    std::vector<float> sort_even(const std::vector<float>& l) {
        std::vector<float> result(l.size());
        int j = 0;
        for (int i = 0; i < l.size(); i++) {
            if (i % 2 == 0) {
                result[i] = l[j];
                j++;
            } else {
                result[i] = l[i];
            }
        }
        std::sort(result.begin(), result.end());
        return result;
    }
}

int main() {
    std::vector<float> input({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    std::cout << "Original array: ";
    for (float num : input) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<float> sortedEven = myspace::sort_even(input);
    std::cout << "Sorted even array: ";
    for (float num : sortedEven) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    assert(myspace::issame(myspace::sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}