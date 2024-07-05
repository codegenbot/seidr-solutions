if (txt.empty() || !isalpha(txt.back())) return false;
    size_t last_space = txt.find_last_of(' ');
    return last_space == string::npos || last_space == txt.size() - 2;
}