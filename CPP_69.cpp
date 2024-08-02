#include <vector>
using namespace std;

int search(vector<int> lst) {
    int max = -1;
    for (int i : lst) {
        if (i > 0 && i <= count(i, lst)) {
            max = i;
        }
    }
    return max;
}

int count(int i, vector<int> lst) {
    int count = 0;
    for (int j : lst) {
        if (j == i) {
            count++;
        }
    }
    return count;
}