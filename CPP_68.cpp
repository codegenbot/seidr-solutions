#include <vector>
#include <climits>
#include <cassert>

std::vector<int> pluck(std::vector<int> arr);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallestValue = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestValue) {
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }

    if (smallestIndex != -1) {
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }

    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
  
    return true;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    assert(issame(pluck({5, 8, 2, 4, 9}), {2, 2}));
    assert(issame(pluck({1, 2, 3, 4, 5}), {2, 1}));
    assert(issame(pluck({10, 20, 30, 40, 50}), {10, 0}));
    assert(issame(pluck({11, 13, 15, 17, 19}), {}));
    assert(issame(pluck({2, 4, 6, 8, 10}), {2, 0}));
    
    return 0;
}