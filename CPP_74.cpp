int count1 = 0, count2 = 0;
    for (const string &s : lst1) {
        count1 += s.size();
    }
    for (const string &s : lst2) {
        count2 += s.size();
    }
    
    if (count1 < count2) {
        return lst1;
    } else {
        return lst2;
    }