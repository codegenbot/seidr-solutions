#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    int pos = 0;
    while (pos < x.size()) {
        if (x[pos] == '/') break;
        pos++;
    }
    for (int i = 0; i < pos; i++) a *= stoi(x.substr(0, i)) - 1;
    for (int i = pos + 1; i < x.size(); i++) b *= stoi(x.substr(pos + 1, i));
    pos = 0;
    while (pos < n.size()) {
        if (n[pos] == '/') break;
        pos++;
    }
    for (int i = 0; i < pos; i++) c *= stoi(n.substr(0, i)) - 1;
    for (int i = pos + 1; n.size() > i; i++) d *= stoi(n.substr(pos + 1, i));
    return a*d == b*c;
}