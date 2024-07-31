```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow((long long)num, 2);
            }
        }
    }
    return sum;
}

int main_func() {
    vector<float> lst = {1.5f, 3.0f, 4.25f, 6.0f};
    long long result = double_the_difference(lst);
    cout << "The difference is: " << result << endl;
    return 0;
}