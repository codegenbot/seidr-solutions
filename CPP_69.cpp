#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cassert>

using namespace std;

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }
    int result = -1;
    for (const auto& pair : freq) {
        if (pair.second >= pair.first) {
            result = max(result, pair.first);
        }
    }
    return result;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    assert(search({3, 3, 3, 3}) == 3);
    return 0;
}