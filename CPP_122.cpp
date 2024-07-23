#include <iostream>
#include <vector>
#include <cmath> // Include the math library for log10
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (log10(arr[i]) + 1 <= 2) {
            sum += arr[i];
        } else {
            break;
        }
    }
    return sum;

}

int main() {
    int k;

    cout << "Enter the number of elements: ";
    cin >> k;

    vector<int> numbers;
    for (int i = 0; i < k; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int result = add_elements(numbers, k);
    cout << "The sum of the elements is: " << result << endl;

    return 0;
}