```cpp
int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double result = i/3.0; 
        result = floor(result); 
        result -= 2; 
        sum += static_cast<int>(result); 
    }
    return sum;
}