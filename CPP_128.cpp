#include <iostream>
#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }
    int product = 1;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += abs(arr[i]);
        if (arr[i] < 0) {
            product *= -1;
        }
    }
    return sum * product;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = prod_signs(arr);
    cout << "Result: " << result << endl;
    
    return 0;
}