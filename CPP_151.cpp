#include <iostream>
#include <vector>

double double_the_difference(vector<float> lst) {
    double sum = 0;

    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += pow(num, 2);
        }
    }

    return sum;
}

int main() {
    vector<float> lst = {1, 3, 2, 0};
    cout << double_the_difference(lst) << endl;

    lst = {-1, -2, 0};
    cout << double_the_difference(lst) << endl;

    lst = {9, -2};
    cout << double_the_difference(lst) << endl;

    lst = {0};
    cout << double_the_difference(lst) << endl;

    return 0;
}