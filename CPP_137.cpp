#include <any>
#include <string>

using namespace std;

if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string x = any_cast<string>(a);
    string y = any_cast<string>(b);
    return (x < y) ? a : ((y < x) ? b : a);
}