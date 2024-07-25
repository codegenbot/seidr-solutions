int len1 = 0;
    int len2 = 0;
    for (string str : lst1) {
        len1 += str.length();
    }
    for (string str : lst2) {
        len2 += str.length();
    }
    if (len1 < len2) {
        return lst1;
    } else {
        return (len1 == len2) ? lst1 : lst2;
    }