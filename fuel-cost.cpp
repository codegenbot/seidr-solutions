int getFuelCost(vector<int> vec) {
    int total = 0;
    for (int i : vec) {
        if (i % 3 == 0)
            total += ((i / 3) - 2);
        else
            total += ((i / 3) - 1);
    }
    return total;
}