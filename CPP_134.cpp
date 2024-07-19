return (txt.size() > 0 && isalpha(txt.back()) && txt.size() == 1) || (txt.size() > 1 && isalpha(txt.back()) && !isalpha(txt[txt.size() - 2]) && txt[txt.size() - 2] != ' ');
}