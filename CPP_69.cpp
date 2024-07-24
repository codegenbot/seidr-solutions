#include <vector>
using namespace std;

int search(vector<int> lst) {
    map<int, int> freq;
    for (int x : lst) {
        if (!freq.count(x)) {
            freq[x] = 1;
        } else {
            freq[x]++;
        }
    }
    int ans = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            ans = p.first;
            break;
        }
    }
    return ans;
}