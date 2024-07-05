#include <iostream>
using namespace std;

int basement(vector<int>& v) {
    // ... (your implementation here) ...
}

int main() {
    vector<int> v = {1, 2, -3, 4, 5};
    int index = basement(v);
    if (index == -1) {
        cout << "No negative sum found" << endl;
    } else {
        cout << "First negative sum at index " << index << endl;
    }
    return 0;
}