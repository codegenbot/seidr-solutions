int total1 = 0, total2 = 0;
    for (string s : lst1) {
        total1 += s.size();
    }
    for (string s : lst2) {
        total2 += s.size();
    }
    if (total1 < total2) {
        return lst1;
    } else {
        return lst2;
    }