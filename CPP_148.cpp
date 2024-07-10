#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;
    if (num > 0) {
        // No need for assert here
    } else {
        cout << "Error: Input number should be positive." << endl;
    }
    
    return 0;
}