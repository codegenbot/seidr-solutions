#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

long double double_the_difference(vector<float> lst) {
    long double sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.0, 3.5, 4.0, 5.5};
    long double odd_sum = 11.25;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}