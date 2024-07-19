```cpp
#include <iostream>
#include <string>

int compare_one(std::string str, int num); 

int main() { 
    std::cout << "Enter the first string: "; 
    std::string str1; 
    std::cin >> str1; 

    std::cout << "Enter the second integer: "; 
    int num2; 
    std::cin >> num2; 

    if (num2 < 0) 
        std::cout << "Error: Please enter a non-negative number." << std::endl; 
    else 
        printOutput(str1, num2); 

    return 0; 
}

using namespace std;

void printOutput(string str, int num) {
    if (num == 1) {
        for (char c : str) {
            if (isupper(c)) {
                cout << tolower(c);
            } else {
                cout << c;
            }
        }
    } else {
        cout << str << endl; 
    }
}