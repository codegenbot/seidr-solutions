```
using namespace boost;

any compare_one(any a, any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int))
        return (get<int>(a) > get<int>(b)) ? a : ((get<int>(a) < get<int>(b)) ? b : "None");
    else if(a.type() == typeid(double) && b.type() == typeid(double))
        return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) < get<double>(b)) ? b : "None");
    else if(a.type() == typeid(string) && b.type() == typeid(string))
        return (get<string>(a) > get<string>(b)) ? a : ((get<string>(a) < get<string>(b)) ? b : "None");
    else if((a.type() == typeid(int) && b.type() != typeid(int)) ||
            (a.type() == typeid(double) && b.type() != typeid(double)) ||
            (a.type() == typeid(string) && b.type() != typeid(string)))
        return (get<int>(a) > get<double>(b)) ? &a : ((get<int>(a) < get<double>(b)) ? &b : "None");
    else
        return "None";
}