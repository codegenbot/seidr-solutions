#include <iostream>
#include <string>
#include <algorithm>

int compare_one(int a, std::string b) {
    if (a > stoi(b)) {
        return a;
    }
    else if (a < stoi(b)) {
        return stoi(b);
    }
    else {
        return 0;
    }
}

int compare_one(float a, int b) {
    if (a > b) {
        return (int)a;
    }
    else if (a < b) {
        return b;
    }
    else {
        return (int)a;
    }
}

int compare_one(std::string a, float b) {
    if (stoi(a) > b) {
        return stoi(a);
    }
    else if (stoi(a) < b) {
        return (int)b;
    }
    else {
        return 0;
    }
}

int compare_one(float a, std::string b) {
    if (a > stoi(b)) {
        return (int)a;
    }
    else if (a < stoi(b)) {
        return stoi(b);
    }
    else {
        return 0;
    }
}

int main() {
    int x;
    std::string y;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Enter a string: ";
    std::cin >> y;

    if (std::is_same<decltype(x), int>::value) {
        if (std::is_same<decltype(y), std::string>::value) {
            std::cout << compare_one(x, y) << std::endl;
        }
        else {
            std::cout << compare_one(x, static_cast<float>(y)) << std::endl;
        }
    }
    else if (std::is_same<decltype(x), float>::value) {
        if (std::is_same<decltype(y), int>::value) {
            std::cout << compare_one(x, y) << std::endl;
        }
        else {
            std::cout << "Invalid input" << std::endl;
        }
    }
    else {
        std::cout << "Invalid input" << std::endl;
    }

    return 0;
}