if(strings.empty())
        return "None";

    string longest_string = strings[0];
    for(const string& s : strings) {
        if(s.length() > longest_string.length())
            longest_string = s;
    }
    return longest_string;
}