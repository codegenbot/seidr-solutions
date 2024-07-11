#include <vector>
#include <map>

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

    int result = -1;
    for (auto p : freq) {
        if (p.first > 0 && p.second >= p.first) {
            result = p.first;
            break;
        }
    }
    return result;
}