#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>
#include <cassert>
#include <string>

using boost::any;
using boost::any_cast;
using boost::bad_lexical_cast;
using std::string;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = any_cast<int>(a);
        int intB = any_cast<int>(b);
        if (intA > intB) {
            return any(intA);
        } else if (intA < intB) {
            return any(intB);
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = any_cast<float>(a);
        float floatB = any_cast<float>(b);
        if (floatA > floatB) {
            return any(floatA);
        } else if (floatA < floatB) {
            return any(floatB);
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string stringA = any_cast<string>(a);
        string stringB = any_cast<string>(b);
        float floatA, floatB;
        try {
            floatA = boost::lexical_cast<float>(stringA);
            floatB = boost::lexical_cast<float>(stringB);
        } catch (const bad_lexical_cast&) {
            return any(string("None"));
        }
        if (floatA > floatB) {
            return any(stringA);
        } else if (floatA < floatB) {
            return any(stringB);
        }
    }
    return any(string("None"));
}

int main() {
    assert(any_cast<string>(compare_one(string("1"), 1)) == "None");
    assert(any_cast<int>(compare_one(3, 5)) == 5);
    assert(any_cast<float>(compare_one(3.14f, 2.718f)) == 3.14f);

    return 0;
}