#include <vector>
using namespace std;

int fuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int temp = (price / 3);
        temp = (temp > 0) ? temp - 2 : 0; 
        total += temp;
    }
    return total;
}