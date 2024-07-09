#include <iostream>
#include <string>

using namespace std;

string compareOne(int a, int b) {
    if (a > b) 
        return "First";
    else if (b > a)
        return "Second";
    else 
        return "Equal";
}

int main() {
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    string result = compareOne(num1, num2);
    
    cout << "Result: " << result << endl;
    
    return 0;
}