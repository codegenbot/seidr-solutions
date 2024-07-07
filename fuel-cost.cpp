using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = floor((double)num / 3) - 2;
        sum += result;
    }
    return sum; 
}