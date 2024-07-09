#include <iostream>
#include <sstream>
#include <cctype>
#include <string>
#include <cstdlib>

bool simplify(string numeratorStr, string denominatorStr) {
    int numerator = 0, denominator = 0;
    char arr1[6], arr2[4];
    stringstream s1(numeratorStr), s2(denominatorStr);
    getline(s1, arr1);
    s2 >> arr2;
    char slash;
    slash = s2.peek();
    s2.get(); // Consume the slash
    s2 >> arr2[1];

    string str1(arr1), str2(arr2);

    numerator = atoi(str1.c_str());
    denominator = atoi(str2.substr(0, 1).c_str()) * (slash - '0');

    int gcd = __gcd(numerator, denominator);
    return (numerator / gcd == denominator / gcd);
}

int mainFunction() {
    std::string numeratorStr, denominatorStr;
    std::cout << "Enter the numerator: ";
    std::cin >> numeratorStr;
    std::cout << "Enter the denominator: ";
    std::cin >> denominatorStr;

    if(simplify(numeratorStr, denominatorStr))
        std::cout << "The fraction is simplified." << std::endl;
    else
        std::cout << "The fraction cannot be simplified." << std::endl;

    return 0;
}

int __gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}