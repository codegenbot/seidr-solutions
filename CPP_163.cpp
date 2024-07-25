#include <vector>
#include <cassert>

class Solution {
public:
    static std::vector<int> generate_integers(int start, int end) {
        // Your implementation here
    }
    
    static std::vector<int> filter_even_numbers(const std::vector<int>& numbers) {
        // Your implementation here
    }
    
    static bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
        // Your implementation here
    }
};

int main() {
    assert(Solution::is_same(Solution::generate_integers(17, 89), Solution::filter_even_numbers(Solution::generate_integers(17, 89))));
    return 0;
}