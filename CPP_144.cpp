#include <string>
#include <algorithm>

using namespace std;

bool simplify(string x, string n) {
    int a = stoi(strtok(x.c_str(), "/")[0]);
    int b = stoi(strtok(x.c_str(), "/")[1]);
    int c = stoi(strtok(n.c_str(), "/")[0]);
    int d = stoi(strtok(n.c_str(), "/")[1]);

    long lcm = (long) a * d;
    long commonDivisor = __gcd(a * d, b);

    if ((lcm / commonDivisor) != (c * d) / commonDivisor)
        return false;

    return true;
}