```cpp
#include <bits/stdc++.h>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            if (num % 2 != 0) { // check if number is odd
                odd_sum += pow(num, 2);
            }
        }
    }
    return odd_sum;
}

int main() {
    vector<float> lst;  
    long long odd_sum;   
    int result = double_the_difference(lst);
    cout << result << endl;
}