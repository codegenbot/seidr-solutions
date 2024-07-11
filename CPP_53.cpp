```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int mainInit() { 
    srand(time(nullptr)); 
    int randomNum = rand() % 1000; 

    cout << "Random Number: " << to_string(randomNum) << endl; 

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum of the numbers: " << sum(num1, num2) << endl; 
}

int main() {
    mainInit();
}