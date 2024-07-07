Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<float>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = a.convert_to<string>();
        string strB = b.convert_to<string>();
        return strB.compare(strA) > 0 ? b : ((strA == strB) ? boost::any("None") : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = a.convert_to<int>();
        string strB = b.convert_to<string>();
        return stoi(strB) > numA ? b : ((stoi(strB) == numA) ? boost::any("None") : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int numB = b.convert_to<int>();
        string strA = a.convert_to<string>();
        return stoi(strA) > numB ? a : ((stoi(strA) == numB) ? boost::any("None") : b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float numA = a.convert_to<float>();
        string strB = b.convert_to<string>();
        return strB.compare(to_string(numA)) > 0 ? b : ((strB == to_string(numA)) ? boost::any("None") : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float numB = b.convert_to<float>();
        string strA = a.convert_to<string>();
        return strA.compare(to_string(numB)) > 0 ? a : ((strA == to_string(numB)) ? boost::any("None") : b);
    }
    else {
        throw invalid_argument("Invalid type");
    }
}