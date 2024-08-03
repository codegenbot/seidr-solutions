#include <vector>
#include <cassert>

namespace cpp5 {

    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }

    std::vector<int> intersperse(const std::vector<int>& numbers, int delimiter) {
        std::vector<int> result;
        for (int i = 0; i < numbers.size(); i++) {
            result.push_back(numbers[i]);
            if (i < numbers.size() - 1) {
                result.push_back(delimiter);
            }
        }
        return result;
    }

}

assert(cpp5::issame(cpp5::intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));

return 0;