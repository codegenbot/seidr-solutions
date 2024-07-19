#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<double>(a)) {
        if (holds_alternative<double>(b)) {
            double da = get<double>(a);
            double db = get<double>(b);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (holds_alternative<string>(b)) {
            string sa = get<string>(a);
            double db = get<double>(b);
            double da = stod(sa);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else {
            throw runtime_error("Invalid type");
        }
    } else if (holds_alternative<string>(a)) {
        if (holds_alternative<double>(b)) {
            string sa = get<string>(a);
            double db = get<double>(b);
            double da = stod(sa);
            return (da > db) ? a : ((da < db) ? b : "None");
        } else if (holds_alternative<string>(b)) {
            string sa = get<string>(a);
            string sb = get<string>(b);
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

int main() {
    any a, b;
    // Read input from user
    // ...
    
    any result = compare_one(a, b);
    cout << get<tuple>(result) << endl;  // Print the output
    
    return 0;
}