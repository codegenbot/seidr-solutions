size_t space_pos = txt.find_last_of(" ");
if(space_pos == string::npos) return false;
return isalpha(txt[space_pos+1]);