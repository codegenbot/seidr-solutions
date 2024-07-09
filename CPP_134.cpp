string txt = txt.substr(0, txt.find_last_of(" ") - 1);
return !txt.empty() && isalpha(txt.back());