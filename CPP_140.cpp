```cpp
string fix_spaces(string text) {
    string result = "";
    bool consecutiveSpace = false;

    for (char c : text) {
        if (c == ' ') {
            if (!consecutiveSpace) {
                result += '_';
                consecutiveSpace = true;
            }
        } else {
            if (consecutiveSpace) {
                result += '-';
                consecutiveSpace = false;
            }
            result += c;
        }
    }

    return result;