#include <iostream>
#include <string>

bool simplify(std::string x, std::string n) {
    int x_num = std::stoi(x.substr(0, x.find('/')));
    int x_denom = std::stoi(x.substr(x.find('/') + 1));
    int n_num = std::stoi(n.substr(0, n.find('/')));
    int n_denom = std::stoi(n.substr(n.find('/') + 1));
    
    return (x_num * n_num) % (x_denom * n_denom) == 0;
}