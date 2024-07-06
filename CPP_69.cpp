#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    map<int, int> count;
    for (int num : lst) {
        if (count.find(num) == count.end()) {
            count[num] = 1;
        } else {
            count[num]++;
        }
    }

    int maxVal = -1;
    for (auto p : count) {
        if (p.second >= p.first && p.first > 0) {
            maxVal = p.first;
            break;
        }
    }

    return maxVal;
}