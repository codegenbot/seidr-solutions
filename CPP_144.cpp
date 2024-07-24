#include <string>

int getX(string x) {
    int pos = x.find('/');
    return stoi(x.substr(0, pos));
}

int getY(string x) {
    int pos = x.find('/');
    return stoi(x.substr(pos + 1));
}

bool simplify(string x, string n) {
    int x_num = getX(x);
    int x_den = getY(x);
    int n_num = getX(n);
    int n_den = getY(n);

    return (x_num * n_num) % (x_den * n_den) == 0;
}