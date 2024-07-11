```c++
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int add(int a, int b);

int main() {
    srand(time(nullptr)); 
    int randomNum = rand() % 1000; 

    cout << "Random Number: " << randomNum << endl; 

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum of the numbers: " << add(num1, num2) << endl;
}

int add(int a, int b) {
    return a + b;
}