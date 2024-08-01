#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = i / 3;
        temp = temp - 2;
        if(temp<0)temp=0;
        sum += temp;
    }
    return sum;
}