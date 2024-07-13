boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any((int)a.convert_to<int>() > (int)b.convert_to<int>()
            ? boost::any(b)
            : boost::any(a));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any((float)a.convert_to<float>() > (float)b.convert_to<float()>
            ? a
            : boost::any(b));
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(std::string)) &&
             (b.type() == typeid(string) || b.type() == typeid(std::string))) {
        return boost::any((string)a.convert_to<string>() > (string)b.convert_to<string()>
            ? a
            : boost::any(b));
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(std::string)) &&
             (b.type() == typeid(int) || b.type() == typeid(float))) {
        return boost::any("None");
    }
    else if ((b.type() == typeid(string) || b.type() == typeid(std::string)) &&
             (a.type() == typeid(int) || a.type() == typeid(float))) {
        return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}