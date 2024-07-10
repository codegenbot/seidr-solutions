```cpp
#include <iostream>
using namespace std;

void bf(int n) {
    if(n<1)
        cout << "Error: Input number is less than 1." << endl;
    else
        cout << "Input number is valid." << endl;
}

int main() {
    int num;
    cin >> ws; 
    getline(cin, num); 
    bf(stoi(num)); 
    return 0;
}