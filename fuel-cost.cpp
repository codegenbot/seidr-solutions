#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int temp = (num / 3);
        temp = floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;
}