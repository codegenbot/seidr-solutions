std::string kebabToCamel(const std::string& str) { 
    std::string result = ""; 
    bool capitalizeNext = true; 

    for (char c : str) { 
        if (c == '-') { 
            if (!result.empty()) { 
                if (capitalizeNext) {
                    result.push_back(' ');
                    capitalizeNext = false;
                } else {
                    result += ' ';
                    capitalizeNext = true;
                }
            }
        } else if (capitalizeNext) { 
            result += toupper(c);
            capitalizeNext = false;
        } else { 
            result += tolower(c);
        }
    } 
    return result;