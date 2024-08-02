#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5f, 3.8f, 4.2f, -1.9f};
    long long odd_sum = double_the_difference(lst);
    return 0;
}