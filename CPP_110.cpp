Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    for (int num : lst1) {
        if (evenCount > 0 && num % 2 != 0) {
            int temp = lst1[0];
            lst1[0] = num;
            lst1[0] = temp;
            evenCount--;
        }
    }
    return evenCount == 0 ? "YES" : "NO";
}