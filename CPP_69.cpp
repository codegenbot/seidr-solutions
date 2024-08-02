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

    int result = -1;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->first > 0 && it->second >= it->first) {
            result = it->first;
            break;
        }
    }

    return result;
}