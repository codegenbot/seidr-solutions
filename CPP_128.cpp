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
    return (product * sum > INT_MAX) ? -32768 : product * sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    int result = prod_signs(arr);
    if(result == -32768)
        cout << "The product is too large to be represented by an integer." << endl;
    else
        cout << "The product of all absolute values is: " << result << endl;

    return 0;
}