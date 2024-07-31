int sum1 = 0, sum2 = 0;
    for (const string& s : lst1) {
        sum1 += s.size();
    }
    for (const string& s : lst2) {
        sum2 += s.size();
    }
    return sum1 < sum2 ? lst1 : lst2;