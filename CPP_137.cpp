#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

bool compare_any(string a, string b) {
    try {
        float fa = stof(a);
        float fb = stof(b);
        return fa > fb;
    } catch (invalid_argument e) {
        try {
            double fa = stod(a);
            double fb = stod(b);
            return fa > fb;
        } catch (invalid_argument f) {
            int fa = stoi(a);
            int fb = stoi(b);
            return fa > fb;
        }
    }
}

int main() {
    string a, b;
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
    
    if (compare_any(a, b))
        cout << a << " is greater than " << b << endl;
    else
        cout << a << " is not greater than " << b << endl;

    return 0;
}