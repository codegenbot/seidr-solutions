string txt = txt.substr(0, txt.find(" "));
if(txt.size() == 0 || txt.find(" ") >= txt.find_last_not_of(" "))
    return false;
return !isalnum(txt.back());