size_t lastSpace = txt.find_last_of(' ');
return (lastSpace == string::npos || txt.back() >= 'a' && txt.back() <= 'z') ||
       (txt.empty());