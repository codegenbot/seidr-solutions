#include <vector>
#include <unordered_map>
#include <cassert>

int search(const vector<int>& lst) {
    int result = -1;
    unordered_map<int, int> freq;

    for (int num : lst) {
        freq[num]++;
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > it->second && it->first > result) {
            result = it->first;
        }
    }

    return result;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}