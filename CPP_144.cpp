#include <string>
using namespace std;

bool simplify(string x, string n) {
    int a = stoi(x.substr(1, x.find('/') - 1));
    int b = stoi(x.substr(x.find('/') + 1));
    int c = stoi(n.substr(1, n.find('/') - 1));
    int d = stoi(n.substr(n.find('/') + 1));

    return (a * d) == (b * c);
}