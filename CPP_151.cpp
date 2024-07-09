#include <cmath>
#include <vector>
using namespace std;

long long double_the_difference(vector<long long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && floor((double)num) == num) { 
            if (fmod((double)num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<long long> lst = {1.5, 2.0, 3.5};
    long long odd_sum = double_the_difference(lst);
    cout << "The sum of squares is: " << odd_sum << endl;
    return 0;
}