#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long int double_the_difference(const vector<float>& lst) {
    long long int sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && ((int)num % 2 != 0)) {
            sum += 2 * (int)num; // Double the value of odd integers
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float input;
    
    // Read input values until a non-numeric input or end-of-file
    while (cin >> input) {
        lst.push_back(input);
    }
    
    cout << double_the_difference(lst) << endl;
    return 0;
}