if (txt.empty() || txt.back() == ' ') return false;
    if (isalpha(txt.back()) && txt.find_last_of(' ') == txt.size() - 2) return true;
    return false;
}