#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < min(k, (int)(1e2)); i++) {
        if (log10(arr[i]) + 1 <= 2) {
            sum += arr[i];
        } else {
            break;
        }
    }
    return sum;

}

int main_program() {
    int k;
    
    // Read the number of elements from user.
    cout << "Enter the number of elements: ";
    cin >> k;
    
    vector<int> numbers;
    for (int i = 0; i < k; i++) {
        // Read each element from user.
        cout << "Enter element " << (i + 1) << ": ";
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int result = add_elements(numbers, k);
    cout << "The sum of the elements is: " << result << endl;

    return 0;
}