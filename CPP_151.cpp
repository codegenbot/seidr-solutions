#include <iostream>
#include <vector>
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
    vector<float> lst = {1.5f, 2.0f, 3.5f, 4.0f};
    float odd_sum = double_the_difference(lst);
    cout << "The result is: " << odd_sum << endl;
}