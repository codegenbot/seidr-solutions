```cpp
#include <iostream>
#include <vector>

using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if ((arr[i] >= 10) && (arr[i] <= 99)) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    vector<int> test = {11, 22, 33, 44};
    cout << add_elements(test, 4) << endl; // you should replace this with your actual usage
    return 0;
}