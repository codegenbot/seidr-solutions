int total_chars1 = 0, total_chars2 = 0;
    for (string s : lst1) {
        total_chars1 += s.length();
    }
    for (string s : lst2) {
        total_chars2 += s.length();
    }
    
    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return (total_chars1 == total_chars2) ? lst1 : lst2;
    }