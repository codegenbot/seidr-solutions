#include <vector>
#include <unordered_map>

int search(std::vector<int> lst) {
    std::unordered_map<int, int> freq;
    int maxFreq = 0;
    int result = -1;

    for (int num : lst) {
        freq[num]++;
        maxFreq = std::max(maxFreq, freq[num]);
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first == it->second && it->second > maxFreq) {
            result = it->first;
            break;
        }
    }

    return result;
}

int main() {
    assert(std::search({3, 10, 10, 9, 2}) == -1);
    // ...
}