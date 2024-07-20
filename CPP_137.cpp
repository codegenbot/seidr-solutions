```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        if ((int)b.convert_to<float>() > a.convert_to<int>())
            return a;
        else if ((int)b.convert_to<float>() < a.convert_to<int>())
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (((string)b).find(',') != string::npos)
            return a;
        else if ((int)a > stoi((string)b))
            return a;
        else if ((int)a <stoi((string)b))
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        if ((float)a > (int)b)
            return a;
        else if ((float)a < (int)b)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (((string)b).find(',') != string::npos) {
            if (((string)a).find(',') == string::npos)
                return a;
            else if (((string)b).compare(((string)a)) > 0)
                return b;
            else if (((string)b).compare(((string)a)) < 0)
                return a;
            else
                return boost::any("None");
        } else {
            if (((string)a).find(',') == string::npos && ((string)b).find(',') != string::npos)
                return a;
            else if (((string)a).find(',') == string::npos && ((string)b).find(',') == string::npos)
                return b;
            else
                return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (((string)b).find(',') != string::npos) {
            if (((string)a).find(',') == string::npos)
                return a;
            else if (((string)b).compare(((string)a)) > 0)
                return b;
            else if (((string)b).compare(((string)a)) < 0)
                return a;
            else
                return boost::any("None");
        } else {
            if (((string)a).find(',') == string::npos && ((float)b) > (int)stof((string)a))
                return b;
            else if (((string)a).find(',') == string::npos && ((float)b) < (int)stof((string)a))
                return a;
            else
                return boost::any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (((string)b).find(',') != string::npos) {
            if (((float)a) > stof(((string)b)))
                return a;
            else if (((float)a) < stof(((string)b)))
                return b;
            else
                return boost::any("None");
        } else {
            if ((int)((float)a) > stoi((string)b))
                return a;
            else if ((int)((float)a) < stoi((string)b))
                return b;
            else
                return boost::any("None");
        }
    }

    return a;
}