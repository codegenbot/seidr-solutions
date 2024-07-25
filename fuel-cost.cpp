int calculateFuelCost(vector<int> cost) {
    int total = 0;
    for (int c : cost) {
        c /= 3;
        c = floor(c);
        c -= 2;
        total += c;
    }
    return total;
}