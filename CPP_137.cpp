Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.get<int>() > b.get<int>() ? a : (a.get<int>() < b.get<int>() ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a.get<float>() > b.get<float>() ? a : (a.get<float>() < b.get<float>() ? b : boost::any("None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a.get<int>() > b.get<float>() ? &a : (a.get<int>() < b.get<float>() ? &b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.get<float>() > b.get<int>() ? &a : (a.get<float>() < b.get<int>() ? &b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        try {
            float fa = stof(a.get<string>().replace(",", "").c_str());
            float fb = b.get<float>();
            return fa > fb ? a : (fa < fb ? b : boost::any("None"));
        }
        catch (...) {
            return b;
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        try {
            float fb = stof(b.get<string>().replace(",", "").c_str());
            float fa = a.get<float>();
            return fa > fb ? &a : (fa < fb ? &b : boost::any("None"));
        }
        catch (...) {
            return &b;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        try {
            float fa = stof(a.get<string>().replace(",", "").c_str());
            float fb = stof(b.get<string>().replace(",", "").c_str());
            return fa > fb ? a : (fa < fb ? b : boost::any("None"));
        }
        catch (...) {
            return a;
        }
    }
}