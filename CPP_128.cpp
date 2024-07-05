#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;

int prod_signs(vector<int> arr){
    if (arr.empty()) return -32768;

    int sum_magnitudes = 0;
    int product_signs = 1;

    for (int num : arr) {
        sum_magnitudes += abs(num);
        if (num > 0) product_signs *= 1;
        else if (num < 0) product_signs *= -1;
        else product_signs *= 0;
    }

    return sum_magnitudes * product_signs;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int result = prod_signs(arr);
    cout << "Result: " << result << endl;
    return 0;
}