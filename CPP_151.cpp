```cpp
#include <cmath>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.0, 3.5};
    long long odd_sum = double_the_difference(lst);
    cout << "The sum of squares is: " << odd_sum << endl;
    return 0;
}