int totalChars1 = 0;
    int totalChars2 = 0;
    
    for (string str : lst1) {
        totalChars1 += str.size();
    }
    
    for (string str : lst2) {
        totalChars2 += str.size();
    }
    
    return totalChars1 < totalChars2 ? lst1 : lst2;
}