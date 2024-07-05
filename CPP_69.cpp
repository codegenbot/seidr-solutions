#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }

    int result = -1;
    for (const auto& [num, count] : freq) {
        if (count >= num) {
            result = max(result, num);
        }
    }

    return result;
}

#include <cassert>

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    assert(search({1, 2, 2, 3, 3, 3}) == 3);
    assert(search({1, 1, 1, 1}) == 1);
    assert(search({5, 5, 5, 5, 5}) == 5);
    return 0;
}