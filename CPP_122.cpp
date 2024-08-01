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
    vector<int> arr;
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    arr.resize(num);
    cout << "Enter the elements: ";
    for (int i = 0; i < num; ++i) {
        cin >> arr[i];
    }
    cout << "Sum of elements with length <= 2: " << add_elements(arr, num) << endl;
    return 0;
}