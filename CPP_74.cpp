int sum1 = 0, sum2 = 0;
    for (string s : lst1) {
        sum1 += s.size();
    }
    for (string s : lst2) {
        sum2 += s.size();
    }
    if (sum1 < sum2) {
        return lst1;
    }
    return lst2;
}