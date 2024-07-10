```cpp
int sumOfSquares(int num) {
    return num * num;
}

int main() {
    std::vector<int> lst = {127, 97, 8192}; 
    int result = 0;
    for (const auto& num : lst) {
        result += sumOfSquares(num);
    }
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}