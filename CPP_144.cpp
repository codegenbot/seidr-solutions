#include <string>
using namespace std;

bool simplify(string x, string n) {
    int a = stoi(substring(x, 1, x.find('/')));
    int b = stoi(substring(x, x.find('/') + 1));
    int c = stoi(substring(n, 1, n.find('/')));
    int d = stoi(substring(n, n.find('/') + 1));

    return (a * d) == (b * c);
}