#include <iostream>
#include <string>
#include <algorithm>

int compareOne(int a, float b) {
    if (a > b) {
        return a;
    }
    else if (a < b) {
        return static_cast<int>(b);
    }
    else {
        return a;
    }
}

int compareOne(int a, std::string b) {
    if (std::stoi(b) > a) {
        return a;
    }
    else if (std::stoi(b) < a) {
        return std::stoi(b);
    }
    else {
        return a;
    }
}

int compareOne(float a, int b) {
    if (a > b) {
        return static_cast<int>(a);
    }
    else if (a < b) {
        return b;
    }
    else {
        return static_cast<int>(a);
    }
}

int compareOne(float a, std::string b) {
    if (std::stof(b) > a) {
        return static_cast<int>(a);
    }
    else if (std::stof(b) < a) {
        return std::stoi(b);
    }
    else {
        return static_cast<int>(a);
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
        return static_cast<int>(b);
    }
    else {
        return std::stoi(a);
    }
}

int compareOne(float a, float b) {
    if (a > b) {
        return static_cast<int>(a);
    }
    else if (a < b) {
        return static_cast<int>(b);
    }
    else {
        return static_cast<int>(a);
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
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    switch (a > b ? 1 : a < b ? 2 : 3) {
        case 1:
            std::cout << "Greater" << std::endl;
            break;
        case 2:
            std::cout << "Less" << std::endl;
            break;
        default:
            std::cout << "Equal" << std::endl;
    }
    return 0;
}