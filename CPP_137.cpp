#include <boost/any.hpp>
#include <string>

if (a.type() == boost::any::typeclass<int> && 
    b.type() == boost::any::typeclass<int>) {
    if (get<int>(a) > get<int>(b)) {
        return a;
    } else if (get<int>(a) < get<int>(b)) {
        return b;
    } else {
        return a;
    }
} else if (a.type() == boost::any::typeclass<float> && 
           b.type() == boost::any::typeclass<float>) {
    if (get<float>(a) > get<float>(b)) {
        return a;
    } else if (get<float>(a) < get<float>(b)) {
        return b;
    } else {
        return a;
    }
} else if (a.type() == boost::any::typeclass<string> && 
           b.type() == boost::any::typeclass<string>) {
    if (get<string>(a) > get<string>(b)) {
        return a;
    } else if (get<string>(a) < get<string>(b)) {
        return b;
    } else {
        return a;
    }
} else {
    throw invalid_argument("Invalid types");
}