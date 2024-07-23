int add(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 != 0) { // Check if index is odd
            sum += lst[i];
        }
    }
    return sum;
}