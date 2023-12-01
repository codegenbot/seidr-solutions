#include <iostream>
#include <vector>

double double_the_difference(vector<float> lst) {
    double sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
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