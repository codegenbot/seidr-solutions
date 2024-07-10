std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int oddCount1 = 0;
    for (int num : lst1)
        if (num % 2 != 0)
            oddCount1++;
    
    int oddCount2 = 0;
    for (int num : lst2)
        if (num % 2 != 0)
            oddCount2++;
    
    return (oddCount1 == 0 && oddCount2 == 0) ? "YES" : "NO";
}