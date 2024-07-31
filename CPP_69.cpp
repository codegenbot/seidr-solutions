#include <vector>
#include <map>

using namespace std;

int search(vector<int> lst) {
    map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }

    int maxFreq = -1;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            maxFreq = it->first;
            break;
        }
    }

    return maxFreq;
}