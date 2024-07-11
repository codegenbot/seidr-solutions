#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int add(int a, int b);

int main() {
    srand(time(nullptr)); 
    int randomNum = rand() % 1000; 

    cout << "Random Number: " << randomNum << endl; 

    int num1, num2;
    string strInput;
    cout << "Enter two numbers: ";
    cin >> strInput;

    int spaceIndex = strInput.find(' ');
    if(spaceIndex != -1) {
        num1 = stoi(strInput.substr(0, spaceIndex));
        num2 = stoi(strInput.substr(spaceIndex + 1));
    } else {
        cout << "Please enter two numbers separated by a space." << endl;
        return 1; // exit the program
    }

    cout << "Sum of the numbers: " << add(num1, num2) << endl;
}

int add(int a, int b) {
    return a + b;
}