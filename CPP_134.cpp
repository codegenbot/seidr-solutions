size_t pos = txt.find_last_of(" ");
if (pos != string::npos) {
    return !isalpha(txt[pos]);
} else {
    return isalpha(txt.back());
}