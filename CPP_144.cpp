#include <stdio.h>
#include <string>
using namespace std;

bool simplify(string x, string n) {
    int x_num = stoi(x.substr(0, x.find('/')));
    int x_den = stoi(x.substr(x.find('/') + 1));
    int n_num = stoi(n.substr(0, n.find('/')));
    int n_den = stoi(n.substr(n.find('/') + 1));

    return (x_num * n_den) % (x_den * n_num) == 0;
}