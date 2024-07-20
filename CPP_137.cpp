#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    string b;
    cin >> b;
    if(a > stoi(b)) {
        cout << "a is greater";
    }
    else if(stoi(b) > a) {
        cout << "b is greater";
    }
    else {
        cout << "They are equal";
    }
    return 0;
}