#include <unordered_map>
#include <vector>
#include <cassert>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    int result = -1;
    for (auto& [num, count] : freq) {
        if (count >= num && num > result) {
            result = num;
        }
    }
    return result;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    assert(search({1, 2, 2, 4, 4, 4, 4}) == 4);
    assert(search({3, 3, 3, 3, 3, 3}) == 3);
    assert(search({1, 1, 1, 1, 1, 1, 1, 1}) == 1);
    assert(search({10, 10, 10, 10, 10, 10, 10, 10, 10, 10}) == 10);
    return 0;
}