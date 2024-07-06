```cpp
#include <iostream>
#include <vector>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    vector<int> input;
    int num_elements;
    cout << "Enter the number of elements: ";
    cin >> num_elements;
    cout << "Enter the elements (space separated): ";
    for(int i = 0; i < num_elements; i++) {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    int output = add_elements(input, num_elements);
    cout << "Sum of elements: " << output << endl;
    return 0;
}