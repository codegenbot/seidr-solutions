size_t pos = 0;
while (pos < txt.length()) {
    if (txt[pos] == ' ') {
        break;
    }
    pos++;
}
return pos + 1 < txt.length() && isalpha(txt.back());