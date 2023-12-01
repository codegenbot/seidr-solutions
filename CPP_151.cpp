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
    vector<float> lst = {1, 2, 3, 4, 5};  // initialize the vector with some values
    
    assert(double_the_difference(lst) == 35);  // verify the solution
    
    return 0;
}