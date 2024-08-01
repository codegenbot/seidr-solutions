#include <iostream>
#include <vector>
#include <map>

int main() {
    int n = 5; // Input size (modify this)
    std::vector<int> input = {3, 10, 10, 9, 2}; // Example input

    int result = search(input);
    assert(result == -1);

    return 0;
}

int search(std::vector<int>& lst) {
    std::map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }

    int result = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            result = p.first;
            break;
        }
    }

    return result;
}