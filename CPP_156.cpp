#include <vector>
#include <string>

struct Roman {
    std::string value;
};

std::string int_to_mini_romank(int number) {
    if (number >= 1000) {
        return "m";
    } else if (number >= 900) {
        return "cm";
    } else if (number >= 500) {
        return "d";
    } else if (number >= 400) {
        return "cd";
    } else if (number >= 100) {
        if (number % 100 == 0) {
            return std::to_string(number / 100) + "c";
        } else {
            return std::to_string(number / 100) + "c" + int_to_mini_romank(number % 100);
        }
    } else if (number >= 90) {
        return "xc";
    } else if (number >= 50) {
        if (number % 50 == 0) {
            return std::to_string(number / 50) + "l";
        } else {
            return std::to_string(number / 50) + "l" + int_to_mini_romank(number % 50);
        }
    } else if (number >= 40) {
        return "xl";
    } else if (number >= 10) {
        if (number % 10 == 0) {
            return std::to_string(number / 10) + "x";
        } else {
            return std::to_string(number / 10) + "x" + int_to_mini_romank(number % 10);
        }
    } else if (number >= 9) {
        return "ix";
    } else if (number >= 5) {
        if (number % 5 == 0) {
            return std::to_string(number / 5) + "v";
        } else {
            return std::to_string(number / 5) + "v" + int_to_mini_romank(number % 5);
        }
    } else if (number >= 4) {
        return "iv";
    } else if (number >= 1) {
        if (number % 1 == 0) {
            return std::to_string(number / 1) + "i";
        } else {
            return std::to_string(number / 1) + "i" + int_to_mini_romank(number % 1);
        }
    } else {
        return "";
    }
}

int main() {
    std::vector<int> romanMap(std::vector<int>::allocator_type{}); // Initialize an empty vector
    assert(int_to_mini_romank(1000) == "m"); // Call the function and test it
    return 0;
}