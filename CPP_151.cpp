#include <vector>
#include <cmath>
#include <initializer_list>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0f, 2.0f, 3.0f};
    long long odd_sum = double_the_difference(lst);
    cout << odd_sum;
}