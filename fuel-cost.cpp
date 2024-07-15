```
#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int new_val = (i / 3) - 2;
        sum += new_val;
    }
    return sum;
}

int main() { 
    return fuelCost(vector<int>{1, 2, 3}); 
}