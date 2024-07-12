```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> remove_duplicates(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (!binary_search(result.begin(), result.end(), i)) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main_test() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};
    vector<int> test1(arr, arr + sizeof(arr) / sizeof(arr[0]));
    vector<int> test2 = remove_duplicates(test1);
    if (issame(test1, test2)) {
        for (int i : test2) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Test failed" << endl;
    }
    return 0;
}