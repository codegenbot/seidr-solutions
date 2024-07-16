int sum1 = 0, sum2 = 0;
    for (const string& str : lst1) {
        sum1 += str.length();
    }
    for (const string& str : lst2) {
        sum2 += str.length();
    }
    return sum1 < sum2 ? lst1 : lst2;