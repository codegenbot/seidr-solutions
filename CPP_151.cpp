#include <bits/stdc++.h>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (modf(sqrt(num), &num) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.25, 3.125, 4.0625}; 
    long long result = double_the_difference(lst);
    cout << "The result is: " << result << endl;
    return 0;
}