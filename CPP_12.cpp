if (strings.empty()) {
        return "None";
    }
    
    string longest_string = strings[0];
    for (const string &str : strings) {
        if (str.length() > longest_string.length() || (str.length() == longest_string.length() && str < longest_string)) {
            longest_string = str;
        }
    }
    
    return longest_string;
}