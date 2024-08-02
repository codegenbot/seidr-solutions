#include <cmath>
#include <vector>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> my_lst = {1.5f, 3.8f}; // declare and initialize lst
    int odd_sum = double_the_difference(my_lst); // define and calculate odd_sum
    cout << "The sum is: " << odd_sum << endl;
}