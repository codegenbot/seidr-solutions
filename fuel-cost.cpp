#include <vector>
using namespace std;

int fuelCost(vector<int> costs) {
    int total = 0;
    for (int cost : costs) {
        int new_cost = (cost / 3);
        if (new_cost > 2)
            new_cost -= 2;
        else 
            new_cost = 0;  
        total += new_cost;
    }
    return total;
}