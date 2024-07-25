#include <vector>
#include <algorithm>

using namespace std;

int search(vector<int> lst) {
    int maxFreq = -1;
    for (int num : lst) {
        int freq = count(lst.begin(), lst.end(), num);
        if (num > maxFreq && freq >= num) {
            maxFreq = num;
        }
    }
    return maxFreq;
}