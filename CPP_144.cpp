#include <string>
using namespace std;

bool simplify(string x, string n) {
    long long a = llround(atof(x.c_str()) * atof(n.c_str()));
    long long b = llround(atof(x.c_str()).floor() * atof(n.c_str()).ceil());
    return a == b;
}