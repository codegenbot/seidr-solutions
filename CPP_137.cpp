#include <string>
#include <algorithm>

std::string compareOne(std::string a, std::string b) {
    double numA = stod(a.replace(".", ","));
    double numB = stod(b.replace(".", ","));

    if (numA > numB) return a;
    else if (numA < numB) return b;
    else return "None";
}

int main() {
    std::string input1, input2;
    std::cout << "Enter the first value: ";
    std::cin >> input1;
    std::cout << "Enter the second value: ";
    std::cin >> input2;
    
    std::cout << compareOne(input1, input2) << std::endl;

    return 0;
}