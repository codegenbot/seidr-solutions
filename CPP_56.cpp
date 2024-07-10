#include <string>

bool correct_bracketing(const std::string& brackets) {
    int angle_brackets = 0;
    int square_brackets = 0;
    for (char c : brackets) {
        if (c == '<') {
            angle_brackets++;
        } else if (c == '>') {
            if (angle_brackets <= 0) {
                return false;
            }
            angle_brackets--;
        } else if (c == '[') {
            square_brackets++;
        } else if (c == ']') {
            if (square_brackets <= 0) {
                return false;
            }
            square_brackets--;
        }
    }
    if (angle_brackets > 0 || square_brackets > 0) return false;
    return angle_brackets == 0 && square_brackets == 0;
}