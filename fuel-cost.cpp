Here is the solution:

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double num = (double)i / 3;
        int newNum = floor(num);
        sum += newNum - 2;
    }
    return sum;
}