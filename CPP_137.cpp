#include <string>
#include <iostream>

int compareOne(std::string a, std::string b) {
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    else
        return 0;
}

int main() {
    std::string strA, strB;
    int choice;

    // Input strings from user.
    std::cout << "Enter the first string: ";
    std::getline(std::cin, strA);
    std::cout << "Enter the second string: ";
    std::getline(std::cin, strB);

    // Compare the input strings and display the result.
    choice = compareOne(strA, strB);

    if (choice > 0)
        std::cout << strA << " is greater than " << strB << "." << std::endl;
    else if (choice < 0)
        std::cout << strA << " is less than " << strB << "." << std::endl;
    else
        std::cout << strA << " and " << strB << " are equal." << std::endl;

    return 0;
}