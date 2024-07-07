#include <string>
#include <algorithm>

using namespace boost;

any compare_one(any a, any b) {
    float fa = a.type() == type_code<float>();
    float fb = b.type() == type_code<float>();

    if (fa && fb) {
        return (float)a > (float)b ? a : fb ? b : any("None");
    }

    string sa = a.type() == type_code<string>();
    string sb = b.type() == type_code<string>();

    if (sa && sb) {
        return sa > sb ? a : sb ? b : any("None");
    }

    if (fa || fb) {
        return fa ? a : b;
    }

    return any("None");
}