#include <any>
#include <string>
#include <iostream>

using namespace std;

any compare_one(any a, any b) {
    if (any_of<DOUBLE>(a)) {
        if (any_of<DOUBLE>(b)) {
            double da = a.convert<DOUBLE>();
            double db = b.convert<DOUBLE>();
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (any_of<string>(b)) {
            string sa = any_cast<string>(a);
            double db = any_cast<double>(b);
            double da = stod(sa);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else {
            throw runtime_error("Invalid type");
        }
    } else if (any_of<string>(a)) {
        if (any_of<DOUBLE>(b)) {
            string sa = any_cast<string>(a);
            double db = any_cast<double>(b);
            double da = stod(sa);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (any_of<string>(b)) {
            string sa = any_cast<string>(a);
            string sb = any_cast<string>(b);
            double da = stod(sa);
            double db = stod(sb);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else {
            throw runtime_error("Invalid type");
        }
    } else {
        throw runtime_error("Invalid type");
    }
}