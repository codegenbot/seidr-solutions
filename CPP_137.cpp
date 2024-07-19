#include <iostream>
#include <string>
#include <variant>

using namespace std;

variant<double, string> compare_one(variant<any> a, variant<any> b) {
    if (holds_alternative<double>(a.index())) {
        double da = get<double>(a);
        if (holds_alternative<double>(b.index())) {
            double db = get<double>(b);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (holds_alternative<string>(b.index())) {
            string sb = get<string>(b);
            da = stod(sb);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else {
            throw runtime_error("Invalid type");
        }
    } else if (holds_alternative<string>(a.index())) {
        string sa = get<string>(a);
        da = stod(sa);
        if (holds_alternative<double>(b.index())) {
            double db = get<double>(b);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (holds_alternative<string>(b.index())) {
            string sb = get<string>(b);
            da = stod(sb);
            return (da > da) ? a : ((da < da) ? b : "None");
        } else {
            throw runtime_error("Invalid type");
        }
    } else {
        throw runtime_error("Invalid type");
    }
}

int main() {
    variant<any> a, b;
    // Input your values here
    cout << get<variant<double, string>>(compare_one(a, b)) << endl;
    return 0;
}