string str;
for (char c : text) {
    if (!strchr("aeiouAEIOU", c)) {
        str += c;
    }
}
return str;