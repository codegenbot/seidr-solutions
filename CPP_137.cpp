#include <iostream>
#include <string>
#include <algorithm>
#include <variant>
using namespace std;

std::variant<int, float, string> compare_one(std::variant<int, float, string> a, std::variant<int, float, string> b) {
    if (a.index() == 0) {
        int x = std::get<0>(a);
        if (b.index() == 1) {
            float y = std::get<1>(b);
            return (x > y) ? a : b;
        } else if (b.index() == 2) {
            string s = std::get<2>(b);
            try {
                float y = stof(s);
                return (x > y) ? a : b;
            } catch (const std::invalid_argument& e) {
                return "None";
            }
        } else {
            return "None";
        }
    } else if (a.index() == 1) {
        float x = std::get<1>(a);
        if (b.index() == 0) {
            int y = std::get<0>(b);
            return (x > y) ? a : b;
        } else if (b.index() == 2) {
            string s = std::get<2>(b);
            try {
                float y = stof(s);
                return (x > y) ? a : b;
            } catch (const std::invalid_argument& e) {
                return "None";
            }
        } else {
            return "None";
        }
    } else if (a.index() == 2) {
        string s = std::get<2>(a);
        try {
            float x = stof(s);
            if (b.index() == 0) {
                int y = std::get<0>(b);
                return (x > y) ? a : b;
            } else if (b.index() == 1) {
                float y = std::get<1>(b);
                return (x > y) ? a : b;
            } else {
                return "None";
            }
        } catch (const std::invalid_argument& e) {
            return "None";
        }
    } else {
        return "None";
    }
}