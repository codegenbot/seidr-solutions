Here is the solution:

int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        if(i < 3) continue; // If number is less than 3, no operation needed
        int temp = (i/3) - 2;
        sum += temp;
    }
    return sum;
}