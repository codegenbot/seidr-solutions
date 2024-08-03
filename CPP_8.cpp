#include <vector>

bool issame(vector<int> a, vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    if (sum == b[0] && product == b[1]) {
        return true;
    } else {
        return false;
    }
}