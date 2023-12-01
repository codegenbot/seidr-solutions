#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float>& lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += pow(num, 2);
        }
    }
    return odd_sum;
}

int main() {
    vector<float> lst = {1.5, 2.0, 3.5, 4.0, 5.5, 6.0};
    long long result = double_the_difference(lst);
    assert(result == 50);
    
    return 0;
}