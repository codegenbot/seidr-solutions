#include <any>
#include <string>
#include <boost/any.hpp>

using namespace boost;
using namespace std;

int compare_one(const string& s, int i) {
    if (i == 1)
        return stof(s) - 10;
    else if (i == 2)
        return stof(s);
    else if (i == 3)
        return stof(s) + 10;
}

int main() {
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = any_cast<string>(a);
        string y = any_cast<string>(b);
        return (x < y) ? 1 : ((y < x) ? -1 : 0);
    }
    
    assert (compare_one("1", 1) == 0);
}