#include <iostream>
#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }
    int product = 1;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += abs(arr[i]);
        if (arr[i] < 0) {
            product *= -1;
        }
    }
    return sum * product;
}

int main() {
    vector<int> arr;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int result = prod_signs(arr);
    cout << "Result: " << result << endl;
    return 0;
}