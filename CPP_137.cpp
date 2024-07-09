#include <iostream>
#include <string>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<int>(a) > any_cast<float>(b)) {
        return any_cast<int>(a);
    } else if (any_cast<float>(a) > any_cast<int>(b)) {
        return any_cast<int>(b);
    } else if (any_cast<string>(a) > any_cast<string>(b)) {
        return any_cast<string>(a);
    } else if (stof(any_cast<string>(a)) > any_cast<int>(b)) {
        return any_cast<string>(a);
    } else if (stof(any_cast<string>(b)) > any_cast<int>(a)) {
        return any_cast<string>(b);
    } else {
        return "None";
    }
}

int main() {
    int i1;
    float f2;
    string s3;
    cout << "Enter the first value (integer): ";
    cin >> i1;
    cout << "Enter the second value: ";
    if (cin >> f2) {
        // assume it's a float
        cout << any_cast<string>(compare_one(i1, f2)) << endl;
    } else {
        // assume it's a string
        cin.ignore();
        getline(cin, s3);
        cout << any_cast<string>(compare_one(i1, s3)) << endl;
    }
    return 0;
}