int sum_length1 = 0;
    for (const auto& str : lst1) {
        sum_length1 += str.length();
    }
    
    int sum_length2 = 0;
    for (const auto& str : lst2) {
        sum_length2 += str.length();
    }
    
    if (sum_length1 < sum_length2) {
        return lst1;
    } else {
        return lst2;
    }