size_t last_space = txt.rfind(' ');
return (last_space == string::npos || txt.size() - 1 <= last_space) && isalpha(txt.back());