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

int count(int n, vector<int> v) {
    int count = 0;
    for (int i : v) {
        if (i == n)
            count++;
    }
    return count;
}