#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num > 0) {
        string n = to_string(num);
        if (n.empty())
            cout << "Error: Input number is empty." << endl;
        else
            cout << "Input number is valid." << endl;
    } else {
        cout << "Error: Input number should be positive." << endl;
    }
    return 0;
}