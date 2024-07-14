#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& nums) {
    int total = 0;
    for (int num : nums) {
        int result = (num / 3); // Divide by 3 and round down
        if(result <= 2) {
            result = 0; // If the result is less than or equal to 2, set it to 0
        } else {
            result -= 2; // Subtract 2 otherwise
        }
        total += result;
    }
    return total;
}