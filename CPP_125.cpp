vector<string> result;
    string delimiter = " ";
    size_t pos = 0;
    string token;
    
    while ((pos = txt.find(delimiter)) != string::npos) {
        token = txt.substr(0, pos);
        result.push_back(token);
        txt.erase(0, pos + delimiter.length());
    }
    
    // Check if there are no whitespaces and split on commas
    if (txt.find(',') != string::npos) {
        delimiter = ",";
        pos = 0;
        while ((pos = txt.find(delimiter)) != string::npos) {
            token = txt.substr(0, pos);
            result.push_back(token);
            txt.erase(0, pos + delimiter.length());
        }
        result.push_back(txt);
    } else if (result.empty()) {
        int odd_chars = 0;
        for(char c : txt) {
            if (islower(c)) {
                int ord = c - 'a';
                if (ord % 2 != 0) {
                    odd_chars++;
                }
            }
        }
        result.push_back(to_string(odd_chars));
    } else {
        result.push_back(txt);
    }
    
    return result;