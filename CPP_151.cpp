#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to double the sum of positive odd integers in the vector
long long int double_the_difference(const vector<float>& lst) {
    long long int sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && (int)num % 2 != 0) {
            sum += 2 * (int)num; // Assuming 'double the difference' means twice the value
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float num;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        lst.push_back(num);
    }
    cout << double_the_difference(lst) << endl;
    return 0;
}