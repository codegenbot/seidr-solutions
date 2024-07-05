#include <vector>
#include <iostream>

using namespace std;

int sum_squares(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        if (i % 3 == 0) {
            sum += lst[i] * lst[i];
        } else if (i % 4 == 0) {
            sum += lst[i] * lst[i] * lst[i];
        } else {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> data = {-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5, 14, -14, 6, 13, 11, 16, 16, 4, 10};
    cout << sum_squares(data) << endl;  // Should print -1448
    return 0;
}