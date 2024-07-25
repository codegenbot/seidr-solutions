// Include necessary header files
#include <iostream>
#include <string>
#include <cassert>

// Define a function to fix spaces in the input text
std::string fix_spaces(const std::string& text) {
    std::string result = text; // make a copy to modify
    int count = 0; // counter for consecutive spaces

    for (int i = 0; i < result.size(); ++i) {
        if (result[i] == ' ') {
            count = 1;
            while (i + count < result.size() && result[i + count] == ' ') {
                count++;
            }

            if (count > 2) {
                result.replace(i, count, "-");
            } else {
                result.replace(i, count, "_");
            }
        }
    }

    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}