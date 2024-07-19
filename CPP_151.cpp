#include <iostream>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst; // declare and initialize lst
    int odd_sum = 0; // declare and initialize odd_sum
    
    // your code to fill lst and calculate odd_sum

    assert (double_the_difference(lst) == odd_sum );

    return 0;
}