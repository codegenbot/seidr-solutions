int calculateFuelCost(vector<int> input) {
    int total = 0;
    for (int i : input) {
        int val = (i / 3);
        if(val >=1) {
            val -= 2;
        }
        else{
            val = 0;
        }
        total += val;
    }
    return total;
}