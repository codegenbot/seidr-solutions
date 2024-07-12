#include <iostream>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;
    return (ai == ai + bi + ci) || (bi == ai + bi + ci) || (ci == ai + bi + ci);
}

int main() {
    float a, b, c;
    cout << "Enter three numbers: ";
    std::string s1 = std::to_string(a);
    std::string s2 = std::to_string(b);
    std::string s3 = std::to_string(c);
    cin >> s1 >> s2 >> s3;
    a = stod(s1); b = stod(s2); c = stod(s3);

    if (any_int(a, b, c)) 
        cout << "At least one of the input numbers is an integer.\n";
    else
        cout << "None of the input numbers are integers.\n";

    return 0;
}