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

    int maxVal = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            maxVal = p.first;
            break;
        }
    }

    return maxVal;
}