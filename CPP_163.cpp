#include <vector>
#include <cassert>

class Solution {
public:
    static std::vector<int> generate_integers(int start, int end) {
        std::vector<int> result;
        for (int i = start; i <= end; ++i) {
            result.push_back(i);
        }
        return result;
    }

    static std::vector<int> filter_even_numbers(const std::vector<int>& numbers) {
        std::vector<int> result;
        for (int num : numbers) {
            if (num % 2 == 0) {
                result.push_back(num);
            }
        }
        return result;
    }

    static bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
};

int main() {
    assert(Solution::issame(Solution::generate_integers(17, 89), Solution::filter_even_numbers(Solution::generate_integers(17, 89)));
    
    return 0;
}