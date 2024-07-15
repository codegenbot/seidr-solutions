```cpp
int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = static_cast<int>(floor(double(i)/3));
        result = std::max(result - 2, 0); 
        sum += result;
    }
    return sum;
}