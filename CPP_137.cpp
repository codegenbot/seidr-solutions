boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<float>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > b.convert_to<double>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float fa = atof(a.convert_to<string>().c_str());
        float fb = b.convert_to<float>();
        return fa > fb ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double fa = atof(a.convert_to<string>().c_str());
        double fb = b.convert_to<double>();
        return fa > fb ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int fa = atoi(a.convert_to<string>().c_str());
        int fb = b.convert_to<int>();
        return fa > fb ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        double fa = atof(a.convert_to<string>().c_str());
        double fb = atof(b.convert_to<string>().c_str());
        if(fa > fb)
            return a;
        else if(fa < fb)
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}