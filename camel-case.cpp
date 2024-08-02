std::string result;
bool first = true;

for (char c : str) {
    if (c == '-') {
        if (!first) {
            result += ' ';
            result += std::toupper(c);
        } else {
            first = false;
        }
    } else if (c == ' ') {
        if (!first) {
            result += std::toupper(c);
        } else {
            first = false;
            result += c;
        }
    } else {
        if (!first) {
            result += std::toupper(c);
        } else {
            first = false;
            result += c;
        }
    }
}

return result;