size_t lastSpace = txt.find_last_of(" ");
if (lastSpace == string::npos) {
    return isalpha(txt.back());
} else if (txt.size() - 1 > lastSpace) {
    return isalpha(txt[txt.size() - 1]);
}
return false;