#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    static vector<int> generate_integers(int start, int end) {
        vector<int> result;
        for (int i = start; i <= end; ++i) {
            result.push_back(i);
        }
        return result;
    }

    static vector<int> filter_even_numbers(const vector<int>& nums) {
        vector<int> result;
        for (int num : nums) {
            if (num % 2 == 0) {
                result.push_back(num);
            }
        }
        return result;
    }

    static bool issame(const vector<int>& a, const vector<int>& b) {
        return (a == b);
    }
};

int main() {
    assert(Solution::issame(Solution::generate_integers(17, 89), Solution::filter_even_numbers(Solution::generate_integers(17, 89)));
    
    return 0;
}