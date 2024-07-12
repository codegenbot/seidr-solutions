string txt = txt.substr(0, txt.find_last_of(" "));
return !txt.empty() && isalpha(txt.back());