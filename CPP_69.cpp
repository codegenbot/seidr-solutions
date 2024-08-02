#include <vector>
using namespace std;

int search(vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > 0 && i >= count(i, lst)) {
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}

int count(int num, vector<int> vec) {
    int cnt = 0;
    for (int i : vec) {
        if (i == num)
            cnt++;
    }
    return cnt;
}