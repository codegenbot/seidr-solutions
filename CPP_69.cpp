#include <initializer_list>

std::map<int, int> freqMap;

int findMaxFreq(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (freqMap.find(arr[i]) == freqMap.end()) {
            freqMap[arr[i]] = 1;
        } else {
            freqMap[arr[i]]++;
        }
    }

    int maxFreqNum = -1;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= 1 && it->first > 0) {
            maxFreqNum = it->first;
            break;
        }
    }

    return maxFreqNum;
}

int main() {
    int numbers[] = {3, 10, 10, 9, 2};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    assert(findMaxFreq(numbers, size) == 10);
    return 0;