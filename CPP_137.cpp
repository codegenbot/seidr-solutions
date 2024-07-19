#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<double>(a) > any_cast<double>(b)) {
        return a;
    } else if (any_cast<double>(a) < any_cast<double>(b)) {
        return b;
    } else {
        return "None";
    }
}

int main() {
    any a = any_cast<double>(10.5);
    any b = any_cast<double>(20.8);

    cout << compare_one(a, b).type().name() << endl;  // Outputs: std::any::value_type

    return 0;
}