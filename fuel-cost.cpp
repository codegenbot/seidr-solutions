#include <vector>
using namespace std;

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3);
        if(temp<1)
            temp=0;
        else
            temp--;
        sum += temp;
    }
    return sum;
}

int main() {
    vector<int> v = {10,20,30};
    int result = fuelCost(v);
    cout << "Fuel cost: " << result << endl;
    return 0;