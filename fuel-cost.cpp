#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        int newNumber = (number / 3);
        newNumber = min(newNumber, 0); 
        newNumber--; 
        total += newNumber; 
    }
    return total;
}

int main() {
    vector<int> numbers = {10, 15, 20}; 
    cout << "The fuel cost is: " << calculateFuelCost(numbers) << endl;
    return 0;
}