```cpp
using namespace boost;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        float fa = boost::any_cast<float>(a);
        return (fa > boost::any_cast<int>(b)) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string fb = boost::any_cast<string>(b);
        string strA = boost::any_cast<string>(a);
        float fa = std::stof(strA);
        return (fa > std::stof(fb)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (boost::any_cast<string>(a) >= boost::any_cast<string>(b)) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int fb = std::stoi(boost::any_cast<string>(b));
        return ((int)boost::any_cast<int>(a) > fb) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int fa = boost::any_cast<int>(a);
        return (fa >= boost::any_cast<int>(b)) ? "None" : (a > b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int fb = boost::any_cast<int>(b);
        float fa = boost::any_cast<float>(a);
        return (fa > fb) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int fa = boost::any_cast<int>(a);
        int fb = boost::any_cast<int>(b);
        return (fa >= fb) ? "None" : (fa > fb) ? a : b;
    }
    else {
        return "None";
    }
}