using namespace std;

int calculateFuelCost(vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3);
        result = floor(double(result)); 
        result -= 2; 
        sum += result;
    }
    return sum;
}