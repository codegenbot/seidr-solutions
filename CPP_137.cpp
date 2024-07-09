#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compare_one(int a, float b) {
    if (a > b) {
        return a;
    }
    else if (b > a) {
        return b;
    }
    else {
        return 0;
    }
}

int compare_two(float a, string b) {
    stof(b);
    if (stof(b) > a) {
        return stof(b);
    }
    else if (a == stof(b)) {
        return 0;
    }
    else {
        return a;
    }
}

int compare_three(string a, string b) {
    stof(a);
    stof(b);
    if (stof(b) > stof(a)) {
        return stof(b);
    }
    else if (stof(a) == stof(b)) {
        return 0;
    }
    else {
        return stof(a);
    }
}

int compare_four(int a, string b) {
    stof(b);
    if (stof(b) > a) {
        return stof(b);
    }
    else if (a == stof(b)) {
        return 0;
    }
    else {
        return a;
    }
}

int compare_five(string a, int b) {
    stof(a);
    if (stof(a) > b) {
        return stof(a);
    }
    else if (b == stof(a)) {
        return 0;
    }
    else {
        return b;
    }
}

int compare_six(float a, int b) {
    if (a > b) {
        return a;
    }
    else if (b > a) {
        return b;
    }
    else {
        return 0;
    }
}

int compare_seven(int a, int b) {
    if (b > a) {
        return b;
    }
    else if (a == b) {
        return 0;
    }
    else {
        return a;
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
    else if (b > a) {
        cout << "The larger number is: " << b << endl;
    }
    else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}