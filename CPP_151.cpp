#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (fmod(lst[i], 2) == 1 && lst[i] > 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long long odd_sum = double_the_difference(lst);
    if (odd_sum != 15) {
        cout << "Expected sum of odd numbers to be 15, but got " << odd_sum << endl;
    }
    // Call the function again with a different argument
    lst = {6.0, 7.0, 8.0, 9.0, 10.0};
    odd_sum = double_the_difference(lst);
    if (odd_sum != 25) {
        cout << "Expected sum of odd numbers to be 25, but got " << odd_sum << endl;
    }
}