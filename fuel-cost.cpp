```
int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor(double(i) / 3);
        temp -= 2;
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> testVector = {12, 15, 18};
    int result = fuelCost(testVector);
    std::cout << "The total fuel cost is: " << result << std::endl;
    return 0;
}