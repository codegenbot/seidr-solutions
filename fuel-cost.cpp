```c
int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int val = (i / 3);
        val = floor(val);
        val -= 2;
        sum += val;
    }
    return sum;
}