int totalChars1 = 0, totalChars2 = 0;
    for (const string& s : lst1) {
        totalChars1 += s.size();
    }
    for (const string& s : lst2) {
        totalChars2 += s.size();
    }
    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }