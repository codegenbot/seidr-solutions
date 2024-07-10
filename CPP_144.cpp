#include <string>
#include <algorithm>
#include <numeric>

bool checkDivisibility(std::string x, std::string n) {
    if (x.find('/') == std::string::npos || n.find('/') == std::string::npos) {
        return false;
    }

    int den1 = stoi(x.substr(x.find('/') + 1));
    int den2 = stoi(n.substr(n.find('/') + 1));

    if (den1 == 0 || den2 == 0) {
        return false;
    }

    int num1 = stoi(x.substr(0, x.find('/')));
    int num2 = stoi(n.substr(0, n.find('/')));

    return (num1 * den2) % (den1 * num2) == 0;
}