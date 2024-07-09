#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec;

    // Define the pluck function
    std::vector<int> pluck(std::vector<int> nums) {
        std::vector<int> result;
        for (int num : nums) {
            if (num == 7) {
                result.push_back(num);
            }
        }
        return result;
    }

    // Define the issame function
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a.size() == b.size();
    }

    assert(issame(pluck({7, 9, 7, 1}), {}) == true);

    return 0;
}