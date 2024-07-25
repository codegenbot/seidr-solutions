int total_char1 = 0;
    int total_char2 = 0;
    
    for (string str : lst1) {
        total_char1 += str.size();
    }
    
    for (string str : lst2) {
        total_char2 += str.size();
    }
    
    if (total_char1 < total_char2) {
        return lst1;
    } else {
        return lst2;
    }