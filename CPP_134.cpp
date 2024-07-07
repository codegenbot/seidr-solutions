size_t pos = 0;
while (pos < txt.size()) {
    if (txt[pos] == ' ') {
        break;
    }
    pos++;
}
return pos + 1 >= txt.size() || !isalpha(txt.back());