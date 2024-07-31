```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int64_t double_the_difference(vector<float> lst) {
    int64_t sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow((int64_t)num, 2);
            }
        }
    }
    return sum;
}

int main_func() {
    vector<float> lst = {1.5f, 3.0f, 4.25f, 6.0f};
    int64_t odd_sum = double_the_difference(lst);
    cout << "The difference is: " << odd_sum << endl;
    return 0;
}