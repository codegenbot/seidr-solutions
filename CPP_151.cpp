```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<int> lst) {
    long long sum = 0;
    for (int num : lst) {
        if (num > 0 && floor((double)num) == num) { 
            if ((double)num % 2.0 != 0.0) { 
                sum += pow((double)num, 2);
            }
        }
    }
    return sum;
}

int main_func() {
    vector<int> lst = {1, 3, 4, 6};
    long long result = double_the_difference(lst);
    cout << "The difference is: " << result << endl;
    return 0;
}