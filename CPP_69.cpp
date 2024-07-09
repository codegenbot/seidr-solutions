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

    int result = -1;
    for (auto& pair : freq) {
        if (pair.second >= pair.first && pair.first > 0) {
            result = pair.first;
            break;
        }
    }

    return result;
}