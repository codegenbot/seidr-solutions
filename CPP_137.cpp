#include <iostream>
#include <string>
#include <algorithm>

int compare_one(int a, float b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return 0;
}

int compare_one(int a, std::string b) {
    if (std::stoi(b) > a)
        return a;
    else if (std::stoi(b) < a)
        return std::stoi(b);
    else
        return a;
}

int compare_one(float a, int b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return 0;
}

int compare_one(float a, std::string b) {
    if (std::stoi(b.erase(0, 1).erase((std::string)b.length()-1)) < a)
        return a;
    else if (std::stoi(b.erase(0, 1).erase((std::string)b.length()-1)) > a)
        return std::stoi(b.erase(0, 1).erase((std::string)b.length()-1));
    else
        return a;
}

int compare_one(std::string a, int b) {
    if (a > to_string(b))
        return a;
    else if (a < to_string(b))
        return to_string(b);
    else
        return 0;
}

int compare_one(std::string a, float b) {
    if (a > to_string(b).erase(0, 1).erase((std::string)(to_string(b)).length()-1))
        return a;
    else if (a < to_string(b).erase(0, 1).erase((std::string)(to_string(b)).length()-1))
        return to_string(b).erase(0, 1).erase((std::string)(to_string(b)).length()-1);
    else
        return a;
}

int compare_one(float a, float b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return 0;
}

int compare_one(std::string a, std::string b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return 0;
}