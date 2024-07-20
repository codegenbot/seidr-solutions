size_t lastSpace = txt.find_last_of(' ');
return !txt.empty() && (lastSpace == string::npos || txt[lastSpace+1] >= 'a' && txt[lastSpace+1] <= 'z');