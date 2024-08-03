#include <vector>
#include <climits>
#include <cassert>
#include <algorithm>

using namespace std;

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_val = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        max_val = std::max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

int modified_main() {
    rolling_max({3, 2, 3, 100, 3});
    return 0;
}