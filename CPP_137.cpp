#include <any>
#include <string>
#include <iostream>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<double>(a)) {
        if (holds_alternative<double>(b)) {
            double da = get<double>(a);
            double db = get<double>(b);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (holds_alternative<string>(b)) {
            string sa = any_cast<string>(a);
            double db = get<double>(b);
            double da = stod(sa);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else {
            throw runtime_error("Invalid type");
        }
    } else if (holds_alternative<string>(a)) {
        if (holds_alternative<double>(b)) {
            string sa = any_cast<string>(a);
            double db = get<double>(b);
            double da = stod(sa);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (holds_alternative<string>(b)) {
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