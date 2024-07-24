#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    std::istringstream iss(x.substr(1), std::ios_base::in);
    iss >> a;
    iss >> b;

    std::istringstream iss2(n.substr(1), std::ios_base::in);
    iss2 >> c;
    iss2 >> d;

    return (a * c) == (b * d);
}