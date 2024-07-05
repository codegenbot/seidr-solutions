#include<unordered_map>

int search(vector<int> lst) {
    unordered_map<int, int> freq;
    for (int num : lst) {
        freq[num]++;
    }

    int result = -1;
    for (auto& [num, count] : freq) {
        if (count >= num && num > result) {
            result = num;
        }
    }

    return result;
}