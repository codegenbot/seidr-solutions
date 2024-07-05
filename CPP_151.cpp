#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long int double_the_difference(vector<float> lst) {
    long long int sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && (int)num % 2 != 0) {
            sum += 2 * (int)num; // Assuming 'double the difference' means twice the value
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<float> lst(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];
    }

    cout << double_the_difference(lst) << endl;
    return 0;
}