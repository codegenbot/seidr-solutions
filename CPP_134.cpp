size_t last_space_pos = txt.find_last_of(' ');
if (last_space_pos == string::npos) {
    return isalpha(txt.back());
} else {
    return isalpha(txt.back()) && !isalnum(txt.substr(last_space_pos + 1, 1));
}