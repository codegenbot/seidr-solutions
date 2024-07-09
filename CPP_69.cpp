#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> frequency;
    for (int num : lst) {
        if (!frequency.count(num)) {
            frequency[num] = 1;
        } else {
            frequency[num]++;
        }
    }
    for (auto p : frequency) {
        if (p.second >= p.first && p.first > 0) {
            return p.first;
        }
    }
    return -1;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}