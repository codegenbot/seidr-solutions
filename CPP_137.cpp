#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    }
    return "None";
}

int main() {
    // input from user
    cout << "Enter the first string: ";
    string a; cin >> a;
    cout << "Enter the second string: ";
    string b; cin >> b;

    // call compare_one function and print output
    cout << "The result is: " << compare_one(a, b) << endl;

    return 0;
}