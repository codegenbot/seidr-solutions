Here is the completed code:

```cpp
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(a.convert_to<string>().replace(",", ".")) > stof(b.convert_to<string>().replace(",", ".")))
            return a;
        else if (stof(a.convert_to<string>().replace(",", ".")) < stof(b.convert_to<string>().replace(",", ".")))
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = a.convert_to<int>();
        int y = b.convert_to<int>();
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = a.convert_to<float>();
        float y = b.convert_to<float>();
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = a.convert_to<string>().replace(",", ".");
        float x = stof(s);
        int y = b.convert_to<int>();
        if (x > y)
            return a;
        else if (x < y)
            return boost::any(b);
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}