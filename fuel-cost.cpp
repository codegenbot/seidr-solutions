#include <vector>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = static_cast<int>(i / 3.0) - 2; 
        if(temp < 0)
            temp = 0;
        sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> v = {3068, 2275, 9353, 5148, 3504, 1085, 4060, 8440, 8433, 1974, 7951, 9240};
    int result = fuelCost(v);
    return 0;
}