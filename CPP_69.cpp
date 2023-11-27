#include <vector>
#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    int maxFreq = 0;
    int maxValue = -1;

    for (int num : lst) {
        freq[num]++;
        if (num > maxFreq && freq[num] >= num) {
            maxFreq = num;
            maxValue = num;
        }
    }

    return maxValue;
}