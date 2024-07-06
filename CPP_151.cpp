#include <cmath>
#include <vector>
using namespace std;

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
    vector<float> input; 
    float odd_sum = 1.5f; 
    assert(double_the_difference(input) == odd_sum );
    return 0;
}