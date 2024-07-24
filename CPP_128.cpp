```cpp
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    arr.resize(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
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
    
    int result = prod_signs(arr);
    cout << "The final result is: " << result << endl;
    
    return 0;
}