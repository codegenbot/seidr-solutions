#include <iostream>
#include <sstream>
#include <cctype>
#include <string>
#include <cstdlib>

bool simplify(string x, string n) {
    char arr1[6], arr2[4];
    stringstream s1(x), s2(n);
    getline(s1, arr1);
    char slash;
    s2 >> arr2;
    slash = s2.peek();
    s2.get(); // Consume the slash
    s2 >> arr2[1];

    string str1(arr1), str2(arr2);

    return (atoi(str1.c_str()) * (slash - '0') == atoi(str2.substr(0, 1).c_str()) * (slash - '0'));
}

int mainFunction() {
    std::string x, n;
    std::cout << "Enter the numerator: ";
    std::cin >> x;
    std::cout << "Enter the denominator: ";
    std::cin >> n;

    if(simplify(x, n))
        std::cout << "The fraction is simplified." << std::endl;
    else
        std::cout << "The fraction cannot be simplified." << std::endl;

    return 0;
}