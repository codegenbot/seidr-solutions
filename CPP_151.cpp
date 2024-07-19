```cpp
#include <vector>
#include <iostream>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    long long odd_sum;
    lst = {1.0f, 2.0f, 3.0f};
    odd_sum = double_the_difference(lst);
    cout << odd_sum << endl;
    assert(double_the_difference(lst) == odd_sum);
}