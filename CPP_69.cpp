```cpp
#include <iostream>
#include <cassert>
using namespace std;

int search(int n) {
    if(n < 0)
        return -1;
    else
        return n;
}

void runUserInput() {
    string input;
    cout << "Enter a positive number: ";
    getline(cin, input); 
    int num = stoi(input); 
    if (num >= 0) {
        cout << "The search function returns " << search(num) << " for the number " << num << "." << endl;
    } else {
        cout << "The search function returns -1 for negative numbers." << endl;
    }
}

int main() {
    runUserInput();
    int myTest = 3; 
    assert(search(myTest) == -1); 
    return 0;
}