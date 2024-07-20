#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int compare_one(int a, float b) {
    if (a > b) {
        return a;
    }
    else if (a < b) {
        return b;
    }
    else {
        return 0;
    }
}

int compare_one(int a, string b) {
    if (to_string(a) > b) {
        return 1;
    }
    else if (to_string(a) < b) {
        return -1;
    }
    else {
        return 0;
    }
}

int compare_one(float a, int b) {
    if (a > b) {
        return 1;
    }
    else if (a < b) {
        return -1;
    }
    else {
        return 0;
    }
}

int compare_one(string a, int b) {
    if (a > to_string(b)) {
        return 1;
    }
    else if (a < to_string(b)) {
        return -1;
    }
    else {
        return 0;
    }
}

int compare_one(float a, string b) {
    if (to_string(a) > b) {
        return 1;
    }
    else if (to_string(a) < b) {
        return -1;
    }
    else {
        return 0;
    }
}

int compare_one(string a, float b) {
    if (a > to_string(b)) {
        return 1;
    }
    else if (a < to_string(b)) {
        return -1;
    }
    else {
        return 0;
    }
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    
    if (a > b) {
        cout << "The larger number is: " << a << endl;
    }
    else if (a < b) {
        cout << "The larger number is: " << b << endl;
    }
    else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}