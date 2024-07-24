#include <iostream>
#include <string>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<double>(a) > any_cast<double>(b))
        return a;
    else if (any_cast<double>(b) > any_cast<double>(a))
        return b;
    else
        return "None";
}

int main() {
    cout << compare_one(1.0, 2.5) << endl;
    cout << compare_one(1, 2.5) << endl; // This will throw an error.
    cout << compare_one(5.1, 6.0) << endl;
    cout << compare_one(1.0, 1) << endl;
    return 0;
}