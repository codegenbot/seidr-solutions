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
    return 0;
}