size_t pos = txt.find_last_of(" ");
return !pos && isalpha(txt.back());