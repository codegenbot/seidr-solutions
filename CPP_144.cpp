```cpp
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

    return (atoi(arr1) * (slash - '0') == atoi(std::string(1, arr2[0]).data()) * (slash - '0'));
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