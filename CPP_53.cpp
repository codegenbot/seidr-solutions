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

    string s;
    cout << "Enter two numbers: ";
    getline(cin, s);
    int num1 = stoi(s.substr(0, s.find(' ')));
    int num2 = stoi(s.substr(s.find(' ') + 1));

    cout << "Sum of the numbers: " << add(num1, num2) << endl;
}

int add(int a, int b) {
    return a + b;
}