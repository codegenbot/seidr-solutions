#include <string>

bool simplify(std::string x, std::string n) {
    int x_num = std::stoi(x.substr(0, x.find("/")));
    int x_den = std::stoi(x.substr(x.find("/") + 1));
    int n_num = std::stoi(n.substr(0, n.find("/")));
    int n_den = std::stoi(n.substr(n.find("/") + 1));

    int result_num = x_num * n_num;
    int result_den = x_den * n_den;

    return (result_den % result_num == 0);
}