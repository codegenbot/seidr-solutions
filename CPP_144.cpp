#include <string>
#include <cassert>

bool simplify(string x, string n)
{
    string num1 = x.substr(0, x.find('/'));
    string den1 = x.substr(x.find('/') + 1);
    string num2 = n.substr(0, n.find('/'));
    string den2 = n.substr(n.find('/') + 1);

    assert(stoi(den1) != 0 && stoi(den2) != 0);

    return (stoi(num1) * stoi(num2) * stoi(den1)) % (stoi(den1) * stoi(den2)) == 0;
}