string::iterator it = txt.begin() + (txt.length() - 1);
return isalpha(*it) && (*it != ' ' || txt.length() == 1);