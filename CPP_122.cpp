#include <iostream>
#include <vector>

using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    vector<int> input_array;
    int num_elements, k;

    cout << "Enter the number of elements: ";
    cin >> num_elements;

    cout << "Enter the elements: ";
    for (int i = 0; i < num_elements; ++i) {
        int element;
        cin >> element;
        input_array.push_back(element);
    }

    cout << "Enter k: ";
    cin >> k;

    int result = add_elements(input_array, k);

    cout << "The sum of elements is: " << result << endl;

    return 0;
}