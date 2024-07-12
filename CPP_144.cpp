#include <string>
#include <cassert>

using namespace std;

bool simplify(const string& x, const string& n) {
    int num1 = stoi(x.substr(0, x.find('/')));
    int den1 = stoi(x.substr(x.find('/') + 1));
    int num2 = stoi(n.substr(0, n.find('/')));
    int den2 = stoi(n.substr(n.find('/') + 1);

    return (num1 * den2) == (den1 * num2);
}