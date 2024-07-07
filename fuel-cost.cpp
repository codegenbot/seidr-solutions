Here is the solution:

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int number : numbers) {
        int result = (number / 3);
        result = floor(result); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return sum;
}