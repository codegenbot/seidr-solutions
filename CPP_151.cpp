#include <cmath>
#include <vector>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { // check if number is positive and integer
            if (fmod(x, 2.0) != 0.0) { // check if number is odd
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<float> test = {1, 2, 3};
    assert(double_the_difference(test) == some_sum); 
}