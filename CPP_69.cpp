#include <vector>
#include <map>

using namespace std;

int search(vector<int> lst) {
    map<int, int> freq;
    for (int i : lst) {
        if (freq.find(i) == freq.end()) {
            freq[i] = 1;
        } else {
            freq[i]++;
        }
    }

    int result = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            result = p.first;
            break;
        }
    }

    return result;
}