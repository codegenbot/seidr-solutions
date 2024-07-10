using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for(int i : v) {
        int num = (i / 3);
        num = num - (num % 1); // round down to nearest integer
        num -= 2; 
        sum += num; 
    }
    return sum;
}