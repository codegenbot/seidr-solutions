int len1 = 0, len2 = 0;
    for (string str : lst1) {
        len1 += str.size();
    }
    for (string str : lst2) {
        len2 += str.size();
    }
    if (len1 < len2) {
        return lst2;
    } else {
        return lst1;
    }
}