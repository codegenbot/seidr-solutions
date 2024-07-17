Here is the solution:

int calculateFuelCost(vector<int> &numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = static_cast<int>(num / 3.0);
        if (newNum < 1)
            newNum = 0; // round down to nearest integer
        else
            newNum -= 2;
        sum += newNum;
    }
    return sum;
}