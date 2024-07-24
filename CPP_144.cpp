#include <string>
#include <vector>
#include <cstring>

using namespace std;

bool simplify(string x, string n) {
    int a = stoi(x.substr(1).substr(0, find(x.substr(1), "/") - 1));
    int b = stoi(x.substr(1).substr(find(x.substr(1), "/") + 1));
    int c = stoi(n.substr(1).substr(0, find(n.substr(1), "/") - 1));
    int d = stoi(n.substr(1).substr(find(n.substr(1), "/") + 1));

    return (a * c) == (b * d);
}