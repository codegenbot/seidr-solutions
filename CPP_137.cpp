Here is the completed code:

```cpp
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ia = boost::any_cast<int>(a);
        float ib = boost::any_cast<float>(b);
        return (ib > ia) ? b : (ia > 0 ? a : "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ia = boost::any_cast<int>(a);
        string ib = boost::any_cast<string>(b);
        float ibf = stof(ib);
        return (ibf > ia) ? b : (ia > 0 ? a : "None");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float ia = boost::any_cast<float>(a);
        int ib = boost::any_cast<int>(b);
        return (ia > ib) ? a : (ib > 0 ? b : "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string ia = boost::any_cast<string>(a);
        string ib = boost::any_cast<string>(b);
        float ia1, ib1;
        try {
            ia1 = stof(ia);
            ib1 = stof(ib);
        } catch (...) {
            return "None";
        }
        return (ia1 > ib1) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float ia = boost::any_cast<float>(a);
        string ib = boost::any_cast<string>(b);
        try {
            float ibf = stof(ib);
            return (ia > ibf) ? a : b;
        } catch (...) {
            return "None";
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ia = boost::any_cast<int>(a);
        string ib = boost::any_cast<string>(b);
        try {
            float ibf = stof(ib);
            return (ia > ibf) ? a : b;
        } catch (...) {
            return "None";
        }
    }
    return "None";
}