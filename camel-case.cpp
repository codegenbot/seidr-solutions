#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(std::string input) {
    std::string output;
    int i = 0;

    while (i < input.length()) {
        if (input[i] == '-') {
            i++;
            continue;
        }
        if (output.empty()) {
            output += toUpperCase(input[i]);
        } else {
            output += toLowerCase(input[i]);
        }
        while (i + 1 < input.length() && input[i + 1] != ' ') {
            i++;
            output += input[i];
        }
    }

    return output;
}

char toUpperCase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    } else {
        return c;
    }
}

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    } else {
        return c;
    }
}