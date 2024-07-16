int total_chars1 = 0;
    for (string str : lst1) {
        total_chars1 += str.size();
    }

    int total_chars2 = 0;
    for (string str : lst2) {
        total_chars2 += str.size();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }