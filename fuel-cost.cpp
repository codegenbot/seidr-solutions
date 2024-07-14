int getFuelCost(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        int res = i / 3 - 2; // divide by 3, round down and subtract 2
        sum += res; // add to the total sum
    }
    return sum;
}