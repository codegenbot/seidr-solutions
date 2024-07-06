#include <vector>
#include <map>

using namespace std;

int search(vector<int> lst) {
    map<int, int> frequency;
    for (int num : lst) {
        if (frequency.find(num) == frequency.end()) {
            frequency[num] = 1;
        } else {
            frequency[num]++;
        }
    }

    int result = -1;
    for (auto& pair : frequency) {
        if (pair.second >= pair.first && pair.first > 0) {
            result = pair.first;
            break;
        }
    }

    return result;
}