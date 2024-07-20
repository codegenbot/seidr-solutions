#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<float> lst = {1.0f, 2.5f, 3.0f, 4.25f, 5.0f};
    long long result = double_the_difference(lst);
    cout << "The difference is: " << result;
    return 0;
}

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