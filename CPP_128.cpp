```cpp
#include <iostream>
#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;
    for (int x : arr) {
        if (x == 0) {
            return 0;
        }
        product *= abs(x);
        sum += abs(x);
    }
    return product * sum > INT_MAX ? -32768 : product * sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "The product signs are: " << prod_signs(arr) << endl;
    return 0;
}