#include <string>
#include <iostream>

bool simplify(std::string x, std::string n) {
    int numX = std::stoi(x.substr(0, x.find('/')));
    int denX = std::stoi(x.substr(x.find('/') + 1));
    int numN = std::stoi(n.substr(0, n.find('/')));
    int denN = std::stoi(n.substr(n.find('/') + 1));

    return (numX * numN) % (denX * denN) == 0;
}

int main() {
    std::string x, n;
    std::cin >> x >> n;

    if (simplify(x, n)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}