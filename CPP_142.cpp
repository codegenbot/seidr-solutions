#include <cmath>

int sum_squares(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0) {
            lst[i] = pow(lst[i], 2);
        }
        if (i % 4 == 0 && i % 3 != 0) {
            lst[i] = pow(lst[i], 3);
        }
        sum += lst[i];
    }
    return sum;
}