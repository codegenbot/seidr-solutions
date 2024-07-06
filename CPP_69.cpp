#include <iostream>
#include <vector>
#include <map>
using namespace std;

int search(vector<int> lst) {
    map<int, int> count;
    for (int num : lst) {
        if (count.find(num) == count.end()) {
            count[num] = 1;
        } else {
            count[num]++;
        }
    }

    int maxVal = -1;
    for (auto p : count) {
        if (p.second >= p.first && p.first > 0) {
            maxVal = p.first;
            break;
        }
    }

    return maxVal;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}