```cpp
int prod_signs(const std::vector<int>& arr) {
    int product = 1;
    for (int x : arr) {
        if (x == 0) return 0; 
        product *= (x > 0 ? 1 : -1);
    }
    return product;
}