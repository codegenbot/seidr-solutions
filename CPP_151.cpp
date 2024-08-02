#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x >= 0 && int(x) == x) {
            sum += pow(int(x), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    cout << "Enter the numbers (enter 'q' to quit):" << endl;
    while (cin >> num) {
        if (num == 'q') break;
        lst.push_back(num);
    }
    
    long long odd_sum = double_the_difference(lst);
    cout << "Sum of squares: " << odd_sum << endl;
    return 0;
}