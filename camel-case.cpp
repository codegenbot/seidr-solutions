std::string output;
bool firstWord = true;

for (char c : input) {
    if (c == '-') {
        output += (firstWord ? "" : " ") + toupper(c+1);
        firstWord = false;
    } else if (c == ' ') {
        output += " ";
        firstWord = true;
    } else {
        if (!firstWord) {
            output += toupper(c);
            firstWord = true;
        } else {
            output += c;
            firstWord = true;
        }
    }
}

return output;