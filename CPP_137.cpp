Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        int valA = stoi(strA);
        int valB = stoi(strB);
        if (valA > valB)
            return a;
        else if (valA < valB)
            return b;
        else
            return boost::any("None");
    }
    else {
        double valA, valB;
        if (boost::any_cast<int>(a) > 0) {
            valA = boost::any_cast<int>(a);
        } 
        else if (boost::any_cast<double>(a) > 0.0) {
            valA = boost::any_cast<double>(a);
        }
        else {
            valA = boost::any_cast<string>(a).find(',') != string::npos ? stod(boost::any_cast<string>(a)) : 0.0;
        }

        if (boost::any_cast<int>(b) > 0) {
            valB = boost::any_cast<int>(b);
        }
        else if (boost::any_cast<double>(b) > 0.0) {
            valB = boost::any_cast<double>(b);
        }
        else {
            valB = boost::any_cast<string>(b).find(',') != string::npos ? stod(boost::any_cast<string>(b)) : 0.0;
        }

        if (valA > valB)
            return a;
        else if (valA < valB)
            return b;
        else
            return boost::any("None");
    }
}