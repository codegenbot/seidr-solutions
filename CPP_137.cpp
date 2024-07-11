using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);

        size_t commaPos1 = strA.find(',');
        size_t commaPos2 = strB.find(',');

        double numA, numB;
        if (commaPos1 != string::npos) {
            std::istringstream is(strA.substr(0, commaPos1));
            is >> numA;
        }
        else {
            istringstream(is) >> numA;
        }

        if (commaPos2 != string::npos) {
            std::istringstream is(strB.substr(0, commaPos2));
            is >> numB;
        }
        else {
            istringstream(is) >> numB;
        }

        return (numA > numB) ? a : b;
    }
    else if (a.type() == typeid(string)) {
        string str = any_cast<string>(a);
        size_t commaPos = str.find(',');
        double num;

        if (commaPos != string::npos) {
            std::istringstream is(str.substr(0, commaPos));
            is >> num;
        }
        else {
            istringstream(is) >> num;
        }

        return (b.type() == typeid(double) && b.convert_to<double>() > num) ? b : a;
    }
    else if (b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        size_t commaPos = str.find(',');
        double num;

        if (commaPos != string::npos) {
            std::istringstream is(str.substr(0, commaPos));
            is >> num;
        }
        else {
            istringstream(is) >> num;
        }

        return (a.type() == typeid(double) && a.convert_to<double>() > num) ? a : b;
    }

    if (a.convert_to<int>() != a.convert_to<double>()) {
        if (b.convert_to<int>() == b.convert_to<double>()) {
            return b;
        }
    }
    else if (a.convert_to<int>() < a.convert_to<double>()) {
        return b;
    }

    return "None";
}