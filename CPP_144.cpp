#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    int pos = 0;
    while (pos < x.size()) {
        if (x[pos] == '/') break;
        int numeratorPart = stoi(x.substr(0, pos));
        a *= --numeratorPart;
        pos++;
    }
    while (pos < x.size()) {
        if (x[pos] == '/') break;
        int denominatorPart = stoi(x.substr(pos + 1));
        b *= denominatorPart;
        pos += denominatorPart;
    }

    pos = 0;
    while (pos < n.size()) {
        if (n[pos] == '/') break;
        int numeratorPart = stoi(n.substr(0, pos));
        c *= --numeratorPart;
        pos++;
    }
    while (pos < n.size()) {
        if (n[pos] == '/') break;
        int denominatorPart = stoi(n.substr(pos + 1));
        d *= denominatorPart;
        pos += denominatorPart;
    }
    return a*d == b*c;
}