#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 3.0, 4.2, 5.0, 7.0};
    long long odd_sum = double_the_difference(lst);
    
    // Compare the result with odd_sum
    /*
    if (odd_sum == desired_result) {
        // Code execution successful
    } else {
        // Code execution failed
    }
    */
    
    return 0;
}