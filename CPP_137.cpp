Here is the solution:

```
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a).replace(",", ".");
        double da = atof(s1.c_str());
        string s2 = boost::any_cast<string>(b);
        return (da > atof(s2.replace(",", ".").c_str())) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s1 = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return (atof(s1.replace(",", ".").c_str()) > i) ? a : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s1 = boost::any_cast<string>(a);
        double da = atof(s1.replace(",", ".").c_str());
        return (da > boost::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return (atof(s1.replace(",", ".").c_str()) > atof(s2.replace(",", ".").c_str())) ? a : (atof(s1.replace(",", ".").c_str()) < atof(s2.replace(",", ".").c_str()) ? b : boost::any("None"));
    }
    return b;
}