string str;
for (char c : text) {
    if (!isalpha(c) || !strncasecmp(&c, "aeiouAEIOU", 6)) {
        continue;
    }
    str += c;
}
return str;