```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<long long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && floor((double)num) == num) { 
            if (fmod((double)num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main_func() {
    long long odd_sum;
    vector<long long> lst; 
    cout << "Enter elements for the list: ";
    for (int i = 0; i < 5; i++) { 
        long long num;
        cin >> num;
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst); 
    cout << "The difference is: " << odd_sum << endl;

    return 0;
}