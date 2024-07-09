bool hasOdd(vector<int> v) {
    for (int num : v) {
        if (num % 2 != 0)
            return true;
    }
    return false;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    if (!hasOdd(lst1))
        return "YES";
    if (hasOdd(lst2)) 
        return "NO";
    for (int num : lst2) {
        int found = 0;
        for (int num2 : lst1) {
            if (num % 2 == 0 && num2 % 2 != 0) {
                swap(num, num2);
                found = 1;
                break;
            }
        }
        if (!found)
            return "NO";
    }
    return "YES";
}