#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) {  
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 3.8, 4.9, 6.7};
    long long result = double_the_difference(lst);
    cout << "The result is: " << result << endl;
    return 0;
}