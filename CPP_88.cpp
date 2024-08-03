#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        vector<int> result(array);
        sort(result.begin(), result.end(), greater<int>());
        return result;
    } else {
        vector<int> result(array);
        sort(result.begin(), result.end());
        return result;
    }
}

int main() {
    // Test cases
    vector<int> array1 = {};
    vector<int> array2 = {5};
    vector<int> array3 = {2, 4, 3, 0, 1, 5};
    vector<int> array4 = {2, 4, 3, 0, 1, 5, 6};

    cout << "Array 1: ";
    for (int i : sort_array(array1)) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int i : sort_array(array2)) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Array 3: ";
    for (int i : sort_array(array3)) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Array 4: ";
    for (int i : sort_array(array4)) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}