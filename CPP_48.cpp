string toLower = "";
for (char c : text) {
    if (isalpha(c)) {
        toLower += tolower(c);
    } else {
        toLower += c;
    }
}
return toLower == string(rbegin(toLower), rend(toLower));