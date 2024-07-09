string txt = txt.substr(0,txt.length()-1);
return (txt.find(" ") == string::npos || txt.back() >= 'a' && txt.back() <= 'z') ? true : false;