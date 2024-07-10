string toLower = "";
for (char c : text) {
    if (c >= 'A' && c <= 'Z') {
        toLower += (c + 32);
    } else {
        toLower += c;
    }
}
return toLower == reverse(toLower).substr(0, toLower.length());