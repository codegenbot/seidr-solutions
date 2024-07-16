return (!txt.empty() && isalpha(txt.back()) && txt.find_last_of(" ") == txt.length() - 1);
}