```cpp
#include <vector>
#include <cmath>

int main() {
    vector<float> lst = {1.0, 2.0, 3.0, 4.5, 6.7};
    long long result = double_the_difference(lst);
    cout << "The difference is: " << result << endl;
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}