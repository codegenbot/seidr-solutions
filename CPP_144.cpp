#include<string>
using namespace std;

bool simplify(string x, string n) {
    int nx = stoi(x.substr(0, x.find('/'))), dx = stoi(x.substr(x.find('/') + 1));
    int ny = stoi(n.substr(0, n.find('/'))), dy = stoi(n.substr(n.find('/') + 1));

    long gcd = abs(nx * dy - dx * ny);
    nx /= gcd;
    dy /= gcd;

    return (nx == 0 || ny % nx == 0);
}