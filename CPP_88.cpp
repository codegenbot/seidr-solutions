#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 1) {
        vector<int> sortedArray = array;
        sort(sortedArray.begin(), sortedArray.end());
        return sortedArray;
    } else {
        vector<int> sortedArray = array;
        sort(sortedArray.rbegin(), sortedArray.rend());
        return sortedArray;
    }
}

int main() {
    // Testing the function
    vector<int> array1 = {2, 4, 3, 0, 1, 5};
    vector<int> array2 = {6, 5, 4, 3, 2, 1, 0};

    cout << "Array 1: ";
    for (int num : array1) {
        cout << num << " ";
    }
    cout << endl;

    array1 = sort_array(array1);
    cout << "Sorted Array 1: ";
    for (int num : array1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int num : array2) {
        cout << num << " ";
    }
    cout << endl;

    array2 = sort_array(array2);
    cout << "Sorted Array 2: ";
    for (int num : array2) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}