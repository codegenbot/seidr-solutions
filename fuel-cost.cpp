Here is the solution:

int calculateFuelCost(vector<int> vec) {
    int total = 0;
    for (int i : vec) {
        double d = i / 3.0; // divide by 3
        int newI = static_cast<int>(floor(d)); // round down to nearest integer
        newI -= 2; // subtract 2
        total += newI; // add to the total
    }
    return total;
}