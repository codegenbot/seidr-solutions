#include <string>

bool simplify(const std::string& x, const std::string& n){
    int numeratorX = std::stoi(x.substr(0, x.find('/')));
    int denominatorX = std::stoi(x.substr(x.find('/') + 1));
    int numeratorN = std::stoi(n.substr(0, n.find('/')));
    int denominatorN = std::stoi(n.substr(n.find('/') + 1));

    int numeratorResult = numeratorX * numeratorN;
    int denominatorResult = denominatorX * denominatorN;

    return numeratorResult % denominatorResult == 0;
}