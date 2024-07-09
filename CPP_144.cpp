#include <string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 1; i < x.size(); i++) {
        if (x[i] == '/') {
            a = stoi(x.substr(0, i));
            b = stoi(x.substr(i + 1));
            break;
        }
    }
    for (int i = 1; i < n.size(); i++) {
        if (n[i] == '/') {
            c = stoi(n.substr(0, i));
            d = stoi(n.substr(i + 1));
            break;
        }
    }
    return a * d == b * c;
}