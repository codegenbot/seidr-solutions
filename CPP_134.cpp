int i = txt.size() - 1;
while (i >= 0) {
    if (isalpha(txt[i])) {
        if (i == txt.size() - 1 || txt[i + 1] == ' ') {
            return true;
        } else {
            return false;
        }
    }
    i--;
}
return false;
}