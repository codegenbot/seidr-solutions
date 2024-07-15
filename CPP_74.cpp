int count1 = 0, count2 = 0;
    for (const string& str : lst1) {
        count1 += str.size();
    }
    for (const string& str : lst2) {
        count2 += str.size();
    }
    
    return count1 < count2 ? lst1 : (count1 == count2 ? lst1 : lst2);
}