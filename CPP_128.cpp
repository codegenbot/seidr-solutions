```c++
int main() {
    std::vector<int> arr = {-1, 1, 1, 0};
    int result = prod_signs(arr);
    std::cout << "Product of signs: " << (result == 0 ? "zero" : (result > 0 ? "positive" : "negative")) << ", Sum of absolute values: " << result << std::endl;
    return 0;
}