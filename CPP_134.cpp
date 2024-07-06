size_t last_space = txt.find_last_of(' ');
if (last_space == string::npos) {
    return isalpha(txt.back());
} else if (txt.size() - 1 > last_space) {
    return isalpha(txt.back());
}
return false;