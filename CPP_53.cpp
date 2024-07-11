```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    srand(time(nullptr)); 
    int randomNum = rand() % 1000; 

    stringstream ss;
    ss << "Random Number: " << randomNum << endl;
    cout << ss.str() << endl; 

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum of the numbers: " << sum(num1, num2) << endl;
}