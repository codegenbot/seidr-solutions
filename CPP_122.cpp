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
    int k;
    cout << "Enter the number of elements: ";
    cin >> k;
    for(int i = 0; i < k; ++i) {
        cout << "Enter element " << (i+1) << ": ";
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << "The sum is: " << add_elements(arr, k) << endl;
    return 0;
}