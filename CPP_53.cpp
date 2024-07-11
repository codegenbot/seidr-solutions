```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main() {
    srand(time(nullptr)); 
    int randomNum = rand() % 1000; 

    string output = "Random Number: " + to_string(randomNum) + "\n";
    cout << output; 

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    string output2 = "Sum of the numbers: " + to_string(num1 + num2) + "\n";
    cout << output2;
}