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
    cout << "Enter the elements of the array: ";
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int k;
    cout << "Enter the number of elements to add: ";
    cin >> k;
    cout << "The sum of the added elements is: " << add_elements(arr, k) << endl;
    return 0;
}