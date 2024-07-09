size_t last_space = txt.find_last_of(" ");
return (last_space == string::npos || txt[last_space] != ' ') && 
       (!txt.empty() && isalpha(txt.back()));