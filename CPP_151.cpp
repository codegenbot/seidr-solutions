#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    cout << "Enter numbers: ";
    while(cin >> input){
        lst.push_back(input);
    }
    int odd_sum = 0; // declare and initialize the variable
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}