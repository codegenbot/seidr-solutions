if (txt.empty() || !isalpha(txt.back())) return false;
    size_t last_non_space = txt.find_last_not_of(' ');
    return last_non_space != string::npos && isalpha(txt[last_non_space]) && (last_non_space == 0 || txt[last_non_space - 1] == ' ');
}