#include <string>

bool simplify(std::string x, std::string n_str) {
    int x_num = std::stoi(x.substr(0, x.find('/')));
    int x_denom = std::stoi(x.substr(x.find('/') + 1));

    int n_num = std::stoi(n_str.substr(0, n_str.find('/')));
    int n_denom = std::stoi(n_str.substr(n_str.find('/') + 1));

    return (x_num * n_num) % (x_denom * n_denom) == 0;
}