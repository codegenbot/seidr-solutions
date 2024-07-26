#include <vector>
#include <algorithm>
#include <cassert>

namespace contest {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return std::equal(a.begin(), a.end(), b.begin());
    }

    std::vector<int> sort_array(const std::vector<int>& array) {
        if (array.empty()) return array;
        auto temp = array;
        if (contest::issame(std::vector<int>{temp.front()}, std::vector<int>{temp.back()}) || (temp.front() + temp.back()) % 2 == 0)
            std::sort(temp.begin(), temp.end(), std::greater<int>());
        else
            std::sort(temp.begin(), temp.end());
        return temp;
    }

    int solve_problem() {
        assert (issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
        return 0;
    }
}

int main() {
    return contest::solve_problem();
}