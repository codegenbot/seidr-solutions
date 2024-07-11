using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any((int)a.get() > (int)b.get() ? b : a) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any((float)a.convert_to<float>() > (float)b.convert_to<float>() ? &b : &a);
    } else if ((a.type() == typeid(string) || a.type() == typeid(wchar_t*)) &&
               (b.type() == typeid(string) || b.type() == typeid(wchar_t*))) {
        return boost::any(a.get().compare(b.get()) > 0 ? &b : &a);
    } else if ((a.type() == typeid(int) && b.type() != typeid(int)) ||
               (a.type() != typeid(int) && b.type() == typeid(int))) {
        return "None";
    }
    return boost::any();
}