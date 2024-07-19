#include <iostream>
#include <string>
#include <optional>
#include <variant>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<double>(a)) {
        if (holds_alternative<double>(b)) {
            double da = get<double>(a);
            double db = get<double>(b);
            return da > db ? a : ((da < db) ? b : variant<any>(none));
        } else if (holds_alternative<string>(b)) {
            string sa = as<string>(a);
            double db = get<double>(b);
            double da = stod(sa);
            return da > db ? a : ((da < db) ? b : variant<any>(none));
        } else {
            throw runtime_error("Invalid type");
        }
    } else if (holds_alternative<string>(a)) {
        if (holds_alternative<double>(b)) {
            string sa = as<string>(a);
            double db = get<double>(b);
            double da = stod(sa);
            return da > db ? a : ((da < db) ? b : variant<any>(none));
        } else if (holds_alternative<string>(b)) {
            string sa = as<string>(a);
            string sb = as<string>(b);
            double da = stod(sa);
            double db = stod(sb);
            return da > db ? a : ((da < db) ? b : variant<any>(none));
        } else {
            throw runtime_error("Invalid type");
        }
    } else {
        throw runtime_error("Invalid type");
    }
}

int main() {
    any a = 5.0;
    any b = 10.0;

    try {
        any result = compare_one(a, b);
        if (holds_alternative<string>(result)) {
            cout << "The greater value is: " << as<string>(result) << endl;
        } else {
            cout << "The greater value is: " << get<double>(result) << endl;
        }
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}