if (a.type() == boost::any::typeclass<string> &&
    b.type() == boost::any::typeclass<string>) {
    return a.convert<string>().compare(b.convert<string>()) > 0 ? a : (b.convert<string>() >= a.convert<string()) ? "None" : b;
} else if (a.type() == boost::any::typeclass<float> &&
           b.type() == boost::any::typeclass<float>) {
    return a.convert<float>() > b.convert<float>() ? &a : (a.convert<float>() >= b.convert<float>() ? "None" : &b);
} else if (a.type() == boost::any::typeclass<string> &&
           b.type() == boost::any::typeclass<float>) {
    return b.convert<float>() > stof(a.convert<string>()) ? &b : (stof(a.convert<string>()) >= b.convert<float>() ? "None" : &a);
} else if (a.type() == boost::any::typeclass<float> &&
           b.type() == boost::any::typeclass<string>) {
    return stof(b.convert<string>()) > a.convert<float>() ? &b : (stof(b.convert<string>()) >= a.convert<float>() ? "None" : &a);
} else {
    throw std::invalid_argument("Invalid types");
}