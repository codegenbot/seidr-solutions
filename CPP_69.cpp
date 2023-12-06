#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int search(vector<int> lst) {
    int maxFreq = -1;
    int maxFreqElem = -1;

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > maxFreq) {
            maxFreq = lst[i];
            maxFreqElem = i;
        }
    }

    return maxFreqElem;
}