#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    string s1 = x.substr(x.find('/') + 1);
    string s2 = n.substr(n.find('/') + 1);

    for (int i = 0; i < stoi(s1); i++) {
        if ((a * d - b * c) % (b*d) == 0) return true;
        a = a * d - b * c;
        b *= d;
        c *= s2.find('/') + 1;
    }
    return false;
}