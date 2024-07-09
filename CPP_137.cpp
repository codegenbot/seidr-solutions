boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);

        int num1 = 0, num2 = 0;
        bool has_decimal1 = false, has_decimal2 = false;

        for (char c : str1) {
            if (!has_decimal1 && !isdigit(c)) {
                has_decimal1 = true;
            }
            else if (isdigit(c)) {
                num1 = num1 * 10 + (c - '0');
            }
        }

        for (char c : str2) {
            if (!has_decimal2 && !isdigit(c)) {
                has_decimal2 = true;
            }
            else if (isdigit(c)) {
                num2 = num2 * 10 + (c - '0');
            }
        }

        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = boost::any_cast<string>(a);

        int num1 = 0, has_decimal = false;

        for (char c : str) {
            if (!has_decimal && !isdigit(c)) {
                has_decimal = true;
            }
            else if (isdigit(c)) {
                num1 = num1 * 10 + (c - '0');
            }
        }

        int num2 = boost::any_cast<int>(b);

        if (num1 > num2)
            return a;
        else if (num1 < num2)
            return b;
        else
            return boost::any("None");
    }
    else {
        float f1 = boost::any_cast<float>(a), f2 = boost::any_cast<float>(b);

        if (f1 > f2)
            return a;
        else if (f1 < f2)
            return b;
        else
            return boost::any("None");
    }
}