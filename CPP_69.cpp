```cpp
#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> freqMap;
    for (int num : lst) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }

    int maxFreqNum = -1;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            maxFreqNum = it->first;
            break;
        }
    }

    return maxFreqNum;
}

int main() {
    std::vector<int> lst = {3, 10, 10, 9, 2};
    int result = search(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}