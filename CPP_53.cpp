```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

srand(time(nullptr)); 
int randomNum = rand() % 1000; 

cout << "Random Number: " << to_string(randomNum) << endl; 

int num1, num2;
cout << "Enter two numbers: ";
cin >> num1 >> num2;

cout << "Sum of the numbers: " << add(num1, num2) << endl; 

return 0;