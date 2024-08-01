#include <vector>
#include <map>

using namespace std;

int search(vector<int> nums) {
    map<int, int> freq;
    for (int n : nums) {
        if (freq.find(n) == freq.end()) {
            freq[n] = 1;
        } else {
            freq[n]++;
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