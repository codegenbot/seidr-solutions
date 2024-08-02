std::string result;
bool first = true;

for (char c : str) {
    if (c == '-') {
        if (!first) {
            result += std::toupper(c);
        } else {
            first = false;
        }
    } else if (c == ' ') {
        if (!first) {
            result += ' ';
            first = true;
        }
    } else {
        if (!first) {
            result += std::toupper(c);
        } else {
            result += c;
            first = false;
        }
    }
}
return result;