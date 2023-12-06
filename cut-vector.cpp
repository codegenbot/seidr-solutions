
```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Prompt user to enter vector elements separated by spaces
    cout << "Enter a sequence of positive integers (separated by spaces): ";
    
    // Read input from user and store it in a std::vector
    vector<int> vec;
    int x;
    while (cin >> x) {
        vec.push_back(x);
    }
    
    // Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
    int left = 0, right = 0;
    for (int i = 1; i <= vec.size(); i++) {
        if (vec[i] - vec[left] > vec[right] - vec[i]) {
            left = i;
        } else {
            right = i;
        }
    }
    
    // Print the two resulting subvectors as two outputs.
    cout << "The two resulting subvectors are: ";
    for (int i = 0; i < vec.size(); i++) {
        if (i == left) {
            cout << "[";
        }
        cout << vec[i] << " ";
        if (i == right) {
            cout << "]";
        }
    }
    cout << endl;
    
    return 0;
}
```