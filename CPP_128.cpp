#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    
    int sum_magnitudes = 0;
    int product_signs = 1;
    
    for (int num : arr) {
        sum_magnitudes += abs(num);
        if (num == 0) return 0;
        product_signs *= (num > 0) ? 1 : -1;
    }
    
    return sum_magnitudes * product_signs;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    cout << "Result: " << prod_signs(arr) << endl;
    return 0;
}