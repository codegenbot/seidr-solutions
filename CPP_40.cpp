#include <iostream>
#include <vector>
#include <cassert>

bool triples_sum_to_zero(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 2; i++) {
        for (int j = i + 1; j < arr.size() - 1; j++) {
            for (int k = j + 1; k < arr.size(); k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

void solve() {
    std::vector<int> arr;
    int num;
    while (std::cin >> num) {
        arr.push_back(num);
    }

    assert(triples_sum_to_zero(arr));
}

int main() {
    solve();
    return 0;
}