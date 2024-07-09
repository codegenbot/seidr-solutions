string temp = txt;
size_t pos = temp.find_last_of(' ');
if(pos == string::npos || temp.size() - 1 != pos) return false;
return isalpha(temp[pos]);