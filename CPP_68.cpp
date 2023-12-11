```
#include <iostream>
using namespace std;

// Declare the issame function before it is used in main
bool issame(vector<int> a, vector<int> b);

int main() {
    int arr[4] = {7, 9, 7, 1};
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < 4; i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    cout << "Smallest even number: " << smallestEven << endl;
    cout << "Its index in the array: " << smallestIndex << endl;

    return 0;
}

// Define the issame function outside of main
bool issame(vector<int> a, vector<int> b) {
    // Your implementation here
}
```