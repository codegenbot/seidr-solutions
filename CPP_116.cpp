#include <vector>
#include <algorithm>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= n - 1;
        count++;
    }
    return count;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::vector<int> result;

    for (int i = 0; i < arr.size(); i++) {
        int ones = countSetBits(arr[i]);
        if (i == 0 || ones != countSetBits(arr[i-1])) {
            result.push_back(arr[i]);
        } else {
            bool inserted = false;
            for (int j = 0; j < result.size(); j++) {
                if (ones >= countSetBits(result[j])) {
                    result.insert(j, arr[i]);
                    inserted = true;
                    break;
                }
            }
            if (!inserted) {
                result.push_back(arr[i]);
            }
        }
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (countSetBits(a[i]) != countSetBits(b[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(sort_array({2,4,8,16,32}), {2, 4, 8, 16, 32}));
    return 0;
}