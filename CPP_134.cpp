size_t pos = txt.find_last_of(" ");
if (pos == string::npos) return false;

string last_part = txt.substr(pos + 1);
return isalpha(last_part.back());