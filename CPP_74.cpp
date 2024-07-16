int total_len1 = 0, total_len2 = 0;
    for (string str : lst1) {
        total_len1 += str.length();
    }
    for (string str : lst2) {
        total_len2 += str.length();
    }
    
    if (total_len1 < total_len2) {
        return lst1;
    } else {
        return lst2;
    }
}