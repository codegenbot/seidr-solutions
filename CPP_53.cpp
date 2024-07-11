```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() { 
    srand(time(nullptr)); 
    cout << "Random Number: " << to_string(rand() % 1000) << endl; 

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum of the numbers: " << sum(num1, num2) << endl; 
}