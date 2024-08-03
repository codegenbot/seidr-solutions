#include <vector>
#include <climits>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> numbers = {3, 2, 3, 100, 3};
    std::vector<int> result;
    int max_val = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        max_val = std::max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    
    assert(issame(result, std::vector<int>{3, 3, 3, 100, 100}));
    
    return 0;
}