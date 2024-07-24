```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> input;
    int k;

    // Read input from user
    cin >> k;  
    for (int i = 0; i < k; ++i) {
        int num;
        cin >> num;
        input.push_back(num);
    }

    // Calculate sum
    int result = add_elements(input, k);

    cout << "Sum: " << result << endl;

    return 0;

}

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < min(k, arr.size()); i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}