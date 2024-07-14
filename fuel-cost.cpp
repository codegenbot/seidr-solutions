#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int temp = (num / 3); // divide by 3
        temp = floor(temp); // round down to the nearest integer
        temp -= 2; // subtract 2
        sum += temp; // add to the sum
    }
    return sum;
}