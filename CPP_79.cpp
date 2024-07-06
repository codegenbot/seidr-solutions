#include <iostream>
#include <string>

int main() {
    int decimal;
    std::cout << "Enter an integer: ";
    std::cin >> decimal;
    string binary = "";
    while(decimal > 0){
        if(decimal % 2 == 0)
            binary.insert(0,"0");
        else
            binary.insert(0,"1");
        decimal /= 2;
    }
    std::cout << "Binary representation: " << binary << endl;
    return 0;
}