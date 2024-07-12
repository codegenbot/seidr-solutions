#include <string>
#include <iostream>
using namespace std;

bool compare_one(string a, string b) {
    try {
        float fa = stof(a);
        float fb = stof(b);
        return fa > fb;
    } catch (...) {
        try {
            double fa = stod(a);
            double fb = stod(b);
            return fa > fb;
        } catch (...) {
            int fa = stoi(a);
            int fb = stoi(b);
            return fa > fb;
        }
    }
}

int main() {
    string a, b;
    cin >> a >> b;
    if (compare_one(a, b))
        cout << a << " is greater than " << b << endl;
    else
        cout << b << " is greater than or equal to " << a << endl;

    return 0;
}