#include <any>
#include <variant>
#include <string>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<int, float, double>(a)) {
        int intA = get<int>(a);
        int intB;
        if (holds_alternative<int>(b)) {
            intB = get<int>(b);
        } else if (holds_alternative<float>(b)) {
            intB = static_cast<int>(get<float>(b));
        } else {
            intB = static_cast<int>(get<double>(b));
        }
        
        if (intA > intB) {
            return b;
        }
    }

    if (holds_alternative<string>(a)) {
        string strA = get<string>(a);
        string strB = get<string>(b);

        if (strA > strB) {
            return a;
        } else {
            return b;
        }
    }

    return a;
}