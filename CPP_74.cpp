int totalChars1 = 0;
    for (string str : lst1) {
        totalChars1 += str.size();
    }

    int totalChars2 = 0;
    for (string str : lst2) {
        totalChars2 += str.size();
    }

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }