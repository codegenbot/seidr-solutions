#include <vector>
#include <map>

using namespace std;

int search(vector<int> lst) {
    map<int, int> freq;
    for (int i : lst) {
        if (!freq.count(i)) {
            freq[i] = 1;
        } else {
            freq[i]++;
        }
    }

    int max_freq = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            max_freq = p.first;
        }
    }

    return max_freq;
}