```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int64_t double_the_difference(vector<int64_t> lst) {
    int64_t sum = 0;
    for (int64_t num : lst) {
        if (num > 0 && floor((double)num) == num) { 
            if (fmod((double)num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main_func() {
    vector<int64_t> lst = {(int64_t)1.5, (int64_t)3, (int64_t)4, (int64_t)6};
    int64_t odd_sum = double_the_difference(lst);
    cout << "The difference is: " << odd_sum << endl;
    return 0;
}