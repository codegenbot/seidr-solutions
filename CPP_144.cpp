#include <iostream>
#include <sstream>
#include <cctype>
#include <string>
#include <cstdlib>

bool simplify(string x, string n) {
    std::string temp;
    temp = x.substr(0,x.find('/'));
    std::string numerator = temp; // assign the substring to a std::string

    temp.erase(0,temp.find('/')); // remove the part before '/'
    numerator += "/" + temp; // concatenate the result with a slash
    n = n.substr(n.find('/')); // extract the denominator

    return (atoi(numerator.substr(0, numerator.find('/')).data()) * (numerator[1] - '0') == atoi(std::string(1, numerator[3]).data()) * (numerator[4] - '0'));
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