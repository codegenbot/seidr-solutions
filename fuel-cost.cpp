#include <vector>
using namespace std;

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

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}