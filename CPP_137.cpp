#include <iostream>
#include <string>
#include <algorithm>

int compareOne(int a, float b) {
    if (a > b) {
        return a;
    }
    else if (a < b) {
        return b;
    }
    else {
        return a;
    }
}

int compareOne(int a, std::string b) {
    if (a > std::stoi(b)) {
        return a;
    }
    else if (a < std::stoi(b)) {
        return a;
    }
    else {
        return a;
    }
}

int compareOne(float a, int b) {
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

int compareOne(float a, std::string b) {
    if (std::stof(b) > a) {
        return (int)std::stof(b);
    }
    else if (std::stof(b) < a) {
        return (int)a;
    }
    else {
        return (int)a;
    }
}

int compareOne(std::string a, int b) {
    if (std::stoi(a) > b) {
        return std::stoi(a);
    }
    else if (std::stoi(a) < b) {
        return b;
    }
    else {
        return std::stoi(a);
    }
}

int compareOne(std::string a, float b) {
    if (std::stof(a) > b) {
        return std::stoi(a);
    }
    else if (std::stof(a) < b) {
        return (int)b;
    }
    else {
        return std::stoi(a);
    }
}

int compareOne(std::string a, std::string b) {
    if (std::stoi(a) > std::stoi(b)) {
        return std::stoi(a);
    }
    else if (std::stoi(a) < std::stoi(b)) {
        return std::stoi(b);
    }
    else {
        return 0;
    }
}

int main() {
    int a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    if (a > b) {
        std::cout << "The larger number is " << a << ".\n";
    }
    else if (a < b) {
        std::cout << "The larger number is " << b << ".\n";
    }
    else {
        std::cout << "Both numbers are the same.\n";
    }
    return 0;
}