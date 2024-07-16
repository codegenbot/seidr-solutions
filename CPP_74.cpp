int totalChars1 = 0, totalChars2 = 0;
    for (string str : lst1) {
        totalChars1 += str.length();
    }
    for (string str : lst2) {
        totalChars2 += str.length();
    }
    
    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return totalChars1 == totalChars2 ? lst1 : lst2;
    }
}