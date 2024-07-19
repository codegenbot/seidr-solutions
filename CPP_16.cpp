// Convert all characters to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // Sort the string to easily count distinct characters
    sort(str.begin(), str.end());
    
    // Use unique function to shrink the string and remove duplicates
    str.erase(unique(str.begin(), str.end()), str.end());
    
    return str.length();
}