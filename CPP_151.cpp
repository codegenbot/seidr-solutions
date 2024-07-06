#include <vector>
#include <cmath>
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
    vector<float> lst;
    float x;
    while (cin >> x)
        lst.push_back(x);
    long long odd_sum = double_the_difference(lst);
    cout << odd_sum;
    return 0;
}