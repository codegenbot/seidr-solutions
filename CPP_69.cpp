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

    for (auto p = freq.begin(); p != freq.end(); ++p) {
        if (p->second >= p->first && p->first > 0) {
            return p->first;
        }
    }
    return -1;
}