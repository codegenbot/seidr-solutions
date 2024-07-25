int count1 = 0, count2 = 0;
    for (string s : lst1) {
        count1 += s.length();
    }
    for (string s : lst2) {
        count2 += s.length();
    }

    if (count1 < count2) {
        return lst1;
    } else {
        return count1 == count2 ? lst1 : lst2;
    }