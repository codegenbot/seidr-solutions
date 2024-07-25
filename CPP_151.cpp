#include <vector>
#include <cmath>
#include <assert.h> 
#include <iostream>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5f, 3.0f, 4.0f, 5.5f};
    long long result = double_the_difference(lst);
    cout << "The result is: " << result << endl;
    assert(result == 15); 
    return 0;
}