#include <iostream>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst; 
    int odd_sum = 0; 

    float input;
    cout << "Enter numbers separated by spaces: ";
    while (cin >> input) {
        if (input > 0 && modf(input, &input) == 0) {
            odd_sum += input * input;
        }
        lst.push_back(input);
    }

    assert (double_the_difference(lst) == odd_sum );

    return 0;
}