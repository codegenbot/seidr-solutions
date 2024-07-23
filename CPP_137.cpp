Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strB > strA ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        float numB = stof(strB);
        return numB > numA ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int numA = boost::any_cast<int>(b);
        string strA = boost::any_cast<string>(a);
        float numAFloat = stof(strA);
        return numAFloat > numA ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float numA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        float numB = stof(strB);
        return numB > numA ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float numA = boost::any_cast<float>(b);
        string strA = boost::any_cast<string>(a);
        float numAFloat = stof(strA);
        return numAFloat > numA ? a : b;
    } else {
        return "None";
    }
}