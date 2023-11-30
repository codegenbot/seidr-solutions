string exchange(vector<int> lst1, vector<int> lst2) {
    int countOdd = 0;
    for(int i = 0; i < lst1.size(); i++) {
        if(lst1[i] % 2 != 0) {
            countOdd++;
        }
    }
    if(countOdd == 0) {
        return "YES";
    } else {
        return "NO";
    }
}