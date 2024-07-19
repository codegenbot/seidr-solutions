int count1 = 0, count2 = 0;
    for (string str : lst1) {
        count1 += str.size();
    }
    for (string str : lst2) {
        count2 += str.size();
    }
    if (count1 < count2) {
        return lst1;
    } else {
        return lst2;
    }
}