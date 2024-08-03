#include <any>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

any compare_one(const any& a, const any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (any_cast<int>(a) > any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (any_cast<float>(a) > any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);
        if (strA.find_first_of(".,") != string::npos) {
            replace(strA.begin(), strA.end(), ',', '.');
        }
        if (strB.find_first_of(".,") != string::npos) {
            replace(strB.begin(), strB.end(), ',', '.');
        }
        return (stod(strA) > stod(strB)) ? a : b;
    }
    return any("None");
}

int main() {
    assert(any_cast<string>(compare_one(string("1"), 1)) == "None");
    return 0;
}