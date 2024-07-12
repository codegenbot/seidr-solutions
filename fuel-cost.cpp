#include <vector>

int fuelCost(std::vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int new_price = static_cast<int>(price / 3.0);
        if (new_price < 1)
            new_price = 0;
        else
            new_price -= 2;
        sum += new_price;
    }
    return sum;
}