#include <vector>
#include <cmath>

int fuelCost(std::vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int new_price = floor((double)price / 3);
        if (new_price >= 1)
            new_price -= 2;
        else
            new_price = 0;
        sum += new_price;
    }
    return sum;
}