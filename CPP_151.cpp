#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    vector<double> lst;
    double n;
    while (cin >> n) {
        lst.push_back(n);
    }
    long long result = double_the_difference(lst);
    cout << result << endl;
    return 0;
}