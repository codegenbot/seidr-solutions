#include <vector>
#include <map>

using namespace std;

int search(vector<int> lst) {
    map<int, int> freq;
    for (int num : lst) {
        if (!freq.count(num)) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }

    int maxFreq = -1;
    for (auto& pair : freq) {
        if (pair.second >= pair.first && pair.first > 0) {
            maxFreq = pair.first;
            break;
        }
    }

    return maxFreq;
}