#include <vector>
#include <cassert>
#include <algorithm>

bool compareVectors(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallest_even = -1;
    int smallest_index = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if (smallest_even != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    
    return result;
}

int main() {
    assert(compareVectors(pluck({1, 3, 5, 2, 4, 6}), std::vector<int>{2, 3}));
    assert(compareVectors(pluck({7, 9, 2, 4, 6}), std::vector<int>{2, 2}));
}