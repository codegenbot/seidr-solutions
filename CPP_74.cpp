int totalChars1 = 0;
    int totalChars2 = 0;
    
    for (const string& str : lst1) {
        totalChars1 += str.length();
    }
    
    for (const string& str : lst2) {
        totalChars2 += str.length();
    }
    
    if (totalChars1 < totalChars2) {
        return lst1;
    }
    
    return lst2;
}