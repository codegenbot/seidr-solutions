#include <string>

int getX(std::string x) {
    int pos = x.find('/');
    return std::stoi(x.substr(0, pos));
}

int getY(std::string x) {
    int pos = x.find('/');
    return std::stoi(x.substr(pos + 1));
}

bool simplify(std::string x, std::string n) {
    int x_num = getX(x);
    int x_den = getY(x);
    int n_num = getX(n);
    int n_den = getY(n);

    return (x_num * n_num) % (x_den * n_den) == 0;
}