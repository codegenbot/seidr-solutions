#include <vector>
#include <cassert>

class Solution {
public:
    static std::vector<int> generate_integers(int start, int end);
    static std::vector<int> filter_even_numbers(const std::vector<int> &nums);
    static bool is_same(const std::vector<int> &a, const std::vector<int> &b);
};

int main() {
    assert(Solution::is_same(Solution::generate_integers(17, 89), Solution::filter_even_numbers(Solution::generate_integers(17, 89))));
    return 0;
}