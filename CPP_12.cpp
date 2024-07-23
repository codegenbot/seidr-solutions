string result = "None";
    int max_length = 0;
    
    for (const string& str : strings) {
        if (str.length() > max_length || (str.length() == max_length && str < result)) {
            max_length = str.length();
            result = str;
        }
    }
    
    return result;
}