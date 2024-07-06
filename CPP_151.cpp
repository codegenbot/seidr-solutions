```cpp
#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && int(num) == num) { 
            if (int(num) % 2 != 0) { 
                sum += pow(int(num), 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0f, 3.0f, -4.5f, 10.0f};
    cout << double_the_difference(lst) << endl;
    return 0;
}