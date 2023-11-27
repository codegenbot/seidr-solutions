#include <algorithm>
#include <unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }

    int maxNum = -1;
    for (const auto& pair : freq) {
        int num = pair.first;
        int frequency = pair.second;
        if (num > 0 && frequency >= num && num > maxNum) {
            maxNum = num;
        }
    }

    return maxNum;
}