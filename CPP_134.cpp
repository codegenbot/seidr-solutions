size_t last_space = txt.find_last_of(' ');
return (last_space != string::npos && !isalnum(txt[last_space + 1]));