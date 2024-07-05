#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long int double_the_difference(const vector<float>& lst) {
    long long int sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && (int)num % 2 != 0) {
            sum += 2 * (int)num; // Doubling the value of odd numbers
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        float num;
        cin >> num;
        lst.push_back(num);
    }
    cout << double_the_difference(lst) << endl;
    return 0;
}